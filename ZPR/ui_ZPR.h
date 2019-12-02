/********************************************************************************
** Form generated from reading UI file 'ZPR.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZPR_H
#define UI_ZPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZPRClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ZPRClass)
    {
        if (ZPRClass->objectName().isEmpty())
            ZPRClass->setObjectName(QString::fromUtf8("ZPRClass"));
        ZPRClass->resize(424, 228);
        centralWidget = new QWidget(ZPRClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 110, 75, 23));
        ZPRClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ZPRClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 424, 21));
        ZPRClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ZPRClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ZPRClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ZPRClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ZPRClass->setStatusBar(statusBar);

        retranslateUi(ZPRClass);

        QMetaObject::connectSlotsByName(ZPRClass);
    } // setupUi

    void retranslateUi(QMainWindow *ZPRClass)
    {
        ZPRClass->setWindowTitle(QApplication::translate("ZPRClass", "ZPR", nullptr));
        pushButton->setText(QApplication::translate("ZPRClass", "Hello!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZPRClass: public Ui_ZPRClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZPR_H
