#include "qtframe.h"
#include <QFileDialog>

qtframe::qtframe(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setFixedSize(1026, 703);
	ui.painter->setFixedSize(800, 600);
	ui.painter->show();

	//paint = 0;
	//ui.painter = 0;
	
	//createActions();
	//createMenus();
	connect(ui.actionopen_file, SIGNAL(triggered()), this, SLOT(openImages()));

	/*TopRightLayout = new QHBoxLayout();
	TopRightLayout->addWidget(fileMenu);
	TopRightLayout->addWidget(paint);*/

}

qtframe::~qtframe()
{

}

void qtframe::createActions(){

	// File
	openImagesAct = new QAction(tr("&Open Images"), this);
	openImagesAct->setShortcut(QKeySequence::Open);
	openImagesAct->setStatusTip(tr("Open source/target images"));
	connect(openImagesAct, SIGNAL(triggered()), this, SLOT(openImages()));
}

void qtframe::createMenus(){

	fileMenu = new QMenu(tr("&File"), this);
	//fileMenu = menuBar()->addMenu(tr("&File"));
	fileMenu->addAction(openImagesAct);
	menuBar()->addMenu(fileMenu);
}
void qtframe::openImages(){

	QString source = QFileDialog::getOpenFileName(this,
		tr("Open Source Image"), QDir::currentPath(), tr("Image Files (*.png *.jpg *.bmp)"));
	QImage image(source);

	//if (!ui.painter)
	//{
	//	ui.painter = new Paint(this);
	//	ui.painter->setFixedSize(800, 600);
	//	ui.painter->show();
	//}

	//cw = new QWidget(this);
	//TopRightLayout = new QHBoxLayout(cw);
	//TopRightLayout->addWidget(ui.painter);
	//setCentralWidget(cw);
	//image.scaled(ui.painter->width(), ui.painter->height());

	ui.painter->setImage(image.scaled(ui.painter->width(), ui.painter->height()));
	//ui.painter->setFixedSize(image.width(), image.height());
	//resize(image.width(), image.height());
	//ui.painter->show();
}