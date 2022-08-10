/********************************************************************************
** Form generated from reading UI file 'qtdisplay.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDISPLAY_H
#define UI_QTDISPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtdisplayClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtdisplayClass)
    {
        if (qtdisplayClass->objectName().isEmpty())
            qtdisplayClass->setObjectName(QString::fromUtf8("qtdisplayClass"));
        qtdisplayClass->resize(600, 400);
        menuBar = new QMenuBar(qtdisplayClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        qtdisplayClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qtdisplayClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qtdisplayClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(qtdisplayClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        qtdisplayClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qtdisplayClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qtdisplayClass->setStatusBar(statusBar);

        retranslateUi(qtdisplayClass);

        QMetaObject::connectSlotsByName(qtdisplayClass);
    } // setupUi

    void retranslateUi(QMainWindow *qtdisplayClass)
    {
        qtdisplayClass->setWindowTitle(QApplication::translate("qtdisplayClass", "qtdisplay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qtdisplayClass: public Ui_qtdisplayClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDISPLAY_H
