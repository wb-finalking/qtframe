#ifndef _PAINT_
#define _PAINT_

#include <QColor>
#include <QImage>
#include <QPoint>
#include <QWidget>
#include <QDialog>
#include <QWidget>
#include <QLabel>
#include <QGridLayout>

class Paint : public QWidget
{
	Q_OBJECT
public:
	Paint(QWidget * parent);
	void setImage(const QImage & img);


protected:
	void paintEvent(QPaintEvent * event);

private:
	QImage image;
	QLabel *paint;
	QHBoxLayout *TopRightLayout;
};

#endif