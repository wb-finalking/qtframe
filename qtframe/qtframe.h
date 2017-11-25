#ifndef QTFRAME_H
#define QTFRAME_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <QMainWindow>
#include <QActionGroup>
#include <QGridLayout>
#include "ui_qtframe.h"
#include "Paint.h"

class qtframe : public QMainWindow
{
	Q_OBJECT

public:
	qtframe(QWidget *parent = 0);
	~qtframe();

private:
	Ui::qtframeClass ui;

private slots:
	void openImages();

private:
	void createActions();
	void createMenus();

	QMenu * fileMenu;

	QAction * openImagesAct;

	Paint* paint;

	QHBoxLayout *TopRightLayout;

};

#endif // QTFRAME_H
