#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//kolorowanie skladni
#include "highlighter.h"

//#include "json.h"

#include <QFileSystemModel>
#include <QFileDialog>
#include <QTextStream>
#include <QProcess>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void resizeEvent(QResizeEvent *event) override;
    ~MainWindow();
    QString path;
public slots:
    //void textChanged(const QString& text);
    void listdevices();
    void openfile();
    void compilefile();
    void savefile();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
