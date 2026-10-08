
#include "ccircle.h"

bool CCircle::contains(int pointx, int pointy) const {
    int dx = pointx - x;
    int dy = pointy - y;

    return dx*dx + dy*dy <= radius*radius;
}
void CCircle::draw(QPainter &painter) const {
    painter.save();
    if (selected) {
        QPen pen(Qt::red);
        pen.setWidth(3);
        painter.setPen(pen);
    }else {
        QPen pen(Qt::black);
        pen.setWidth(3);
        painter.setPen(pen);
    }
    painter.drawEllipse(x - radius,y - radius,radius * 2,radius * 2);
    painter.restore();

}
bool CCircle::isSelected() const {
    return selected;
}
void CCircle::setSelected(bool value) {
    selected = value;
}
void CCircle::toggleSelected() {
    selected = !selected;
}