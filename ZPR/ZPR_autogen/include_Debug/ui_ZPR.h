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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ZPRClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ZPRClass)
    {
        if (ZPRClass->objectName().isEmpty())
            ZPRClass->setObjectName(QString::fromUtf8("ZPRClass"));
        ZPRClass->resize(600, 400);
        menuBar = new QMenuBar(ZPRClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        ZPRClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ZPRClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ZPRClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ZPRClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ZPRClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ZPRClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ZPRClass->setStatusBar(statusBar);

        retranslateUi(ZPRClass);

        QMetaObject::connectSlotsByName(ZPRClass);
    } // setupUi

    void retranslateUi(QMainWindow *ZPRClass)
    {
        ZPRClass->setWindowTitle(QApplication::translate("ZPRClass", "ZPR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ZPRClass: public Ui_ZPRClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZPR_H
