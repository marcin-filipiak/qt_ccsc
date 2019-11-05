#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->openButton, SIGNAL(clicked()), this, SLOT(openfile()));
    connect(ui->saveButton, SIGNAL(clicked()), this, SLOT(savefile()));
    connect(ui->compileButton, SIGNAL(clicked()), this, SLOT(compilefile()));
    connect(ui->devicesButton, SIGNAL(clicked()), this, SLOT(listdevices()));
}

void MainWindow::resizeEvent(QResizeEvent *event){
    QMainWindow::resizeEvent(event); // wywołanie bazowej klasy metody resizeEvent

    QRect rect = ui->centralWidget->geometry(); // kontrolka edit jest kontrolką potomną kontrolki centralWidget więc pobieram rozmiar tej kontrolki

    ui->codeTextEdit->setGeometry(10, 50, (rect.width()-20), 391); // i ustawiam rozmiar edit-a
    ui->summaryTextEdit->setGeometry(ui->summaryTextEdit->geometry().left(),ui->summaryTextEdit->geometry().top(),(rect.width()-20),391);

}


void MainWindow::listdevices(){
     //sciezka do homa usera
     QString home = QDir::homePath();
     //zapytanie o liste wspieranych mikrokontrolerow
     system(qPrintable("wine '"+home+"/.wine/drive_c/Program Files (x86)/PICC/Ccsc.exe' +Q"));
}

void MainWindow::openfile(){
    path = QFileDialog::getOpenFileName(this,tr("Open File"), path, tr("all types (*)"));

    ui->pathEdit->setText(path);
    ui->codeTextEdit->clear();

    //int lnr=1;

    //wczytanie kodu
    QFile codeFile(path);
    if (codeFile.open(QIODevice::ReadOnly)){
        QTextStream in(&codeFile);
        while (!in.atEnd())
        {
            //wczytanie linii z pliku
            QString line = in.readLine();

            // zamiana znakow < i > tak by poprawnie wyswietlaly sie w html
            line.replace('<',"&lt;");
            line.replace('>',"&gt;");
            line.replace(' ',"&nbsp;");
            line.replace('\t',"&nbsp;&nbsp;&nbsp;");
            line.replace('{',"&#123;");
            line.replace('}',"&#125;");

            //numerowanie linii
            //line ="<span style='background-color:gray;color:white;padding:10px;'> "+QString::number(lnr)+" </span> "+line;
            //lnr++;
            //dodanie linii z pliku do edita

            ui->codeTextEdit->appendHtml(line);
        }
        codeFile.close();

        //koloryzator kodu
        //http://qt.developpez.com/doc/4.7/richtext-syntaxhighlighter/
        //highlighter = new Highlighter(ui->codeTextEdit->document());
    }

}

void MainWindow::savefile(){
    QFile codeFile(path);
    //otwieranie pliku do zapisu tryb tekstowy ladnie tez zrobi EOF
    if (codeFile.open(QFile::WriteOnly | QFile::Text)){
        QTextStream out(&codeFile);
        out << ui->codeTextEdit->toPlainText();
        codeFile.close();
    }
}

void MainWindow::compilefile(){

    QString uctype;
    //wybranie czy; PCB, PCM, PCH
    if (ui->pcbRadio->isChecked()) uctype="+FB";
    if (ui->pcmRadio->isChecked()) uctype="+FM";
    if (ui->pchRadio->isChecked()) uctype="+FH";


    //sprawdzenie czy wybrano plik
    if (path != ""){

        //porobienie sciezek i pobranie nazw plikow
        QFile ff(path);
        QString foo = ff.fileName();
        QString file = foo.section("/",-1,-1);
        QString dir = foo.section("/",0,-2);
        QString fname = file.section(".",0,-2);
        //plik z podsumowaniem dzialania kompilatora
        QString pathsum = dir+"/"+fname+".err";
        QFile sumFile(pathsum);
        //sciezka do homa usera
        QString home = QDir::homePath();

        //uruchomienie kompilatora
        system(qPrintable("wine '"+home+"/.wine/drive_c/Program Files (x86)/PICC/Ccsc.exe' I='C:\\Program Files (x86)\\PICC\\Devices;C:\\Program Files (x86)\\PICC\\Drivers' "+uctype+" +P3 -E "+path));

        //wyswietlanie podsumowania
        ui->summaryTextEdit->clear();
        ui->summaryTextEdit->appendHtml("<b>Compile "+file+"<br/>in "+dir+"</b><br/>");

        //wczytanie pliku z podsumowaniem dzialania kompilatora
        if (sumFile.open(QIODevice::ReadOnly)){
            QTextStream in(&sumFile);
            while (!in.atEnd())
            {
                //wczytanie linii z pliku
                QString line = in.readLine();
                //dodanie linii z pliku do edita
                ui->summaryTextEdit->appendHtml(line);
            }
            sumFile.close();
        }
    }
    else{
        ui->summaryTextEdit->clear();
        ui->summaryTextEdit->appendHtml("<font color='red'>First please open the file</font>");
    }
}

/*
 * Destruktor
 */

MainWindow::~MainWindow() {
}

