#include "qtframe.h"
#include <QFileDialog>

qtframe::qtframe(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	paint = 0;
	
	createActions();
	createMenus();

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

	if (!paint)
		paint = new Paint(this);
	setCentralWidget(paint);
	paint->setImage(image);
	paint->setFixedSize(image.width(), image.height());
	resize(image.width(), image.height());
	paint->show();
}