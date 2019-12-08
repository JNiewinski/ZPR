/********************************************************************************
** Form generated from reading UI file 'ZPR.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZPR_H
#define UI_ZPR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
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
            ZPRClass->setObjectName(QStringLiteral("ZPRClass"));
        ZPRClass->resize(600, 400);
        menuBar = new QMenuBar(ZPRClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ZPRClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ZPRClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ZPRClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(ZPRClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ZPRClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ZPRClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ZPRClass->setStatusBar(statusBar);

        retranslateUi(ZPRClass);

        QMetaObject::connectSlotsByName(ZPRClass);
    } // setupUi

    void retranslateUi(QMainWindow *ZPRClass)
    {
        ZPRClass->setWindowTitle(QApplication::translate("ZPRClass", "ZPR", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZPRClass: public Ui_ZPRClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZPR_H
