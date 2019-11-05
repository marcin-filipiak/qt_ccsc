/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *summaryTextEdit;
    QPlainTextEdit *codeTextEdit;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QRadioButton *pcbRadio;
    QRadioButton *pcmRadio;
    QRadioButton *pchRadio;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *pathEdit;
    QPushButton *openButton;
    QPushButton *saveButton;
    QPushButton *compileButton;
    QPushButton *devicesButton;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(653, 556);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        summaryTextEdit = new QPlainTextEdit(centralWidget);
        summaryTextEdit->setObjectName(QStringLiteral("summaryTextEdit"));
        summaryTextEdit->setGeometry(QRect(10, 450, 631, 61));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(summaryTextEdit->sizePolicy().hasHeightForWidth());
        summaryTextEdit->setSizePolicy(sizePolicy1);
        summaryTextEdit->setMaximumSize(QSize(16777215, 100));
        codeTextEdit = new QPlainTextEdit(centralWidget);
        codeTextEdit->setObjectName(QStringLiteral("codeTextEdit"));
        codeTextEdit->setGeometry(QRect(10, 50, 631, 391));
        sizePolicy1.setHeightForWidth(codeTextEdit->sizePolicy().hasHeightForWidth());
        codeTextEdit->setSizePolicy(sizePolicy1);
        codeTextEdit->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 641, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pcbRadio = new QRadioButton(horizontalLayoutWidget_3);
        pcbRadio->setObjectName(QStringLiteral("pcbRadio"));

        horizontalLayout->addWidget(pcbRadio);

        pcmRadio = new QRadioButton(horizontalLayoutWidget_3);
        pcmRadio->setObjectName(QStringLiteral("pcmRadio"));
        pcmRadio->setChecked(true);

        horizontalLayout->addWidget(pcmRadio);

        pchRadio = new QRadioButton(horizontalLayoutWidget_3);
        pchRadio->setObjectName(QStringLiteral("pchRadio"));

        horizontalLayout->addWidget(pchRadio);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pathEdit = new QLineEdit(horizontalLayoutWidget_3);
        pathEdit->setObjectName(QStringLiteral("pathEdit"));

        horizontalLayout_2->addWidget(pathEdit);

        openButton = new QPushButton(horizontalLayoutWidget_3);
        openButton->setObjectName(QStringLiteral("openButton"));

        horizontalLayout_2->addWidget(openButton);

        saveButton = new QPushButton(horizontalLayoutWidget_3);
        saveButton->setObjectName(QStringLiteral("saveButton"));

        horizontalLayout_2->addWidget(saveButton);

        compileButton = new QPushButton(horizontalLayoutWidget_3);
        compileButton->setObjectName(QStringLiteral("compileButton"));

        horizontalLayout_2->addWidget(compileButton);

        devicesButton = new QPushButton(horizontalLayoutWidget_3);
        devicesButton->setObjectName(QStringLiteral("devicesButton"));

        horizontalLayout_2->addWidget(devicesButton);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "CCScLinux", Q_NULLPTR));
        pcbRadio->setText(QApplication::translate("MainWindow", "PCB", Q_NULLPTR));
        pcmRadio->setText(QApplication::translate("MainWindow", "PCM", Q_NULLPTR));
        pchRadio->setText(QApplication::translate("MainWindow", "PCH", Q_NULLPTR));
        openButton->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        saveButton->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        compileButton->setText(QApplication::translate("MainWindow", "Compile", Q_NULLPTR));
        devicesButton->setText(QApplication::translate("MainWindow", "Devices", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
