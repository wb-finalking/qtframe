#include"Paint.h"
#include <QtGui>
//#include <QMessageBox>

Paint::Paint(QWidget *parent)
	: QWidget(parent){

	//setAttribute(Qt::WA_StaticContents);
	//this->setParent(parent);

	setWindowTitle(tr("Source Image"));
	paint = new QLabel(this);

}

void Paint::setImage(const QImage &img){

	image = img;
	update();
}

void Paint::paintEvent(QPaintEvent *  event )
{
	QPainter painter(this);

	TopRightLayout = new QHBoxLayout(this);
	TopRightLayout->addWidget(paint);
	paint->setPixmap(QPixmap::fromImage(image));

	//painter.translate(x(), y());
	//painter.drawImage(QPoint(0,0), image);
	/*painter.drawPixmap(rect(), QPixmap(":/Images/logo"));*/

	//    update();
}