
#include "mainwindow.h"

Mainwindow::Mainwindow(QWidget *parent)
    : QWidget(parent)
{
    resize(800, 600);
}
void Mainwindow::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton) {
        QPoint point = event->position().toPoint();

        storage.add(new CCircle(point.x(), point.y()));

        update();
    }
}
void Mainwindow::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);

    QPainter painter(this);
    for (int i = 0; i < storage.getCount(); i++) {
        storage.getObject(i)->draw(painter);
    }
}