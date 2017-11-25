/********************************************************************************
** Form generated from reading UI file 'qtframe.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTFRAME_H
#define UI_QTFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qtframeClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtframeClass)
    {
        if (qtframeClass->objectName().isEmpty())
            qtframeClass->setObjectName(QStringLiteral("qtframeClass"));
        qtframeClass->resize(600, 400);
        centralWidget = new QWidget(qtframeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        qtframeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qtframeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        qtframeClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(qtframeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qtframeClass->setStatusBar(statusBar);

        retranslateUi(qtframeClass);

        QMetaObject::connectSlotsByName(qtframeClass);
    } // setupUi

    void retranslateUi(QMainWindow *qtframeClass)
    {
        qtframeClass->setWindowTitle(QApplication::translate("qtframeClass", "qtframe", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qtframeClass: public Ui_qtframeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTFRAME_H
