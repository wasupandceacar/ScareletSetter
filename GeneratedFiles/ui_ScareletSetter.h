/********************************************************************************
** Form generated from reading UI file 'ScareletSetter.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCARELETSETTER_H
#define UI_SCARELETSETTER_H

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

class Ui_QtGuiApplication2Class
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtGuiApplication2Class)
    {
        if (QtGuiApplication2Class->objectName().isEmpty())
            QtGuiApplication2Class->setObjectName(QStringLiteral("QtGuiApplication2Class"));
        QtGuiApplication2Class->resize(600, 400);
        menuBar = new QMenuBar(QtGuiApplication2Class);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        QtGuiApplication2Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtGuiApplication2Class);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QtGuiApplication2Class->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtGuiApplication2Class);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QtGuiApplication2Class->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtGuiApplication2Class);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtGuiApplication2Class->setStatusBar(statusBar);

        retranslateUi(QtGuiApplication2Class);

        QMetaObject::connectSlotsByName(QtGuiApplication2Class);
    } // setupUi

    void retranslateUi(QMainWindow *QtGuiApplication2Class)
    {
        QtGuiApplication2Class->setWindowTitle(QApplication::translate("QtGuiApplication2Class", "QtGuiApplication2", 0));
    } // retranslateUi

};

namespace Ui {
    class QtGuiApplication2Class: public Ui_QtGuiApplication2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCARELETSETTER_H
