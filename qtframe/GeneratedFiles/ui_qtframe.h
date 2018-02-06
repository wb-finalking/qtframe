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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "Paint.h"

QT_BEGIN_NAMESPACE

class Ui_qtframeClass
{
public:
    QAction *actionopen_file;
    QWidget *centralWidget;
    QSlider *slider;
    Paint *painter;
    QMenuBar *menuBar;
    QMenu *menufile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qtframeClass)
    {
        if (qtframeClass->objectName().isEmpty())
            qtframeClass->setObjectName(QStringLiteral("qtframeClass"));
        qtframeClass->resize(1026, 703);
        actionopen_file = new QAction(qtframeClass);
        actionopen_file->setObjectName(QStringLiteral("actionopen_file"));
        centralWidget = new QWidget(qtframeClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        slider = new QSlider(centralWidget);
        slider->setObjectName(QStringLiteral("slider"));
        slider->setGeometry(QRect(990, 0, 22, 651));
        slider->setOrientation(Qt::Vertical);
        painter = new Paint(centralWidget);
        painter->setObjectName(QStringLiteral("painter"));
        painter->setGeometry(QRect(10, 10, 911, 591));
        qtframeClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(qtframeClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1026, 26));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QStringLiteral("menufile"));
        qtframeClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(qtframeClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        qtframeClass->setStatusBar(statusBar);

        menuBar->addAction(menufile->menuAction());
        menufile->addAction(actionopen_file);

        retranslateUi(qtframeClass);

        QMetaObject::connectSlotsByName(qtframeClass);
    } // setupUi

    void retranslateUi(QMainWindow *qtframeClass)
    {
        qtframeClass->setWindowTitle(QApplication::translate("qtframeClass", "qtframe", Q_NULLPTR));
        actionopen_file->setText(QApplication::translate("qtframeClass", "open file", Q_NULLPTR));
        menufile->setTitle(QApplication::translate("qtframeClass", "file", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class qtframeClass: public Ui_qtframeClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTFRAME_H
