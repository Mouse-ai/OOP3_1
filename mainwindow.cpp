
#include "mainwindow.h"

Mainwindow::Mainwindow(QWidget *parent)
    : QWidget(parent)
{
    resize(800, 600);
}
void Mainwindow::mousePressEvent(QMouseEvent *event) {
    if (event->button() != Qt::LeftButton) {
        return;
    }
    QPoint point = event->position().toPoint();

    bool ctrlPressed = event -> modifiers() &Qt::ControlModifier;

    bool circleFound = false;
    for (int i = storage.getCount() - 1; i >= 0; --i)
    {
        CCircle *circle = storage.getObject(i);

        if (circle->contains(point.x(), point.y()))
        {
            circleFound = true;

            if (ctrlPressed)
            {
                circle->toggleSelected();
            }
            else
            {
                storage.clearSelection();
                circle->setSelected(true);
            }

            break;
        }

    }
    if (!circleFound) {
        if (!ctrlPressed) {
            storage.clearSelection();
        }
        storage.add(new CCircle(point.x(), point.y()));
    }
    update();

}
void Mainwindow::paintEvent(QPaintEvent *event) {
    QWidget::paintEvent(event);

    QPainter painter(this);
    for (int i = 0; i < storage.getCount(); i++) {
        storage.getObject(i)->draw(painter);
    }
}
void Mainwindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Delete)
    {
        storage.removeSelected();
        update();
    }
}
void Mainwindow::resizeEvent(QResizeEvent *event) {
    QWidget::resizeEvent(event);

    update();
    std::cout<< "Window resized: "<< event->size().width()<< " x "<< event->size().height()<< std::endl;
}