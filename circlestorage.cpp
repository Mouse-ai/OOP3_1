
#include "circlestorage.h"
void CircleStorage::add(CCircle *circle) {
    circles.push_back(circle);
}
int CircleStorage::getCount() const {
    return static_cast<int>(circles.size());
}
CCircle *CircleStorage::getObject(int index) const {
    return circles[index];
}
CircleStorage::~CircleStorage() {
    for (CCircle *circle : circles) {
        delete circle;
    }
}
void CircleStorage::clearSelection() {
    for (CCircle *circle : circles) {
        circle->setSelected(false);
    }

}
void CircleStorage::removeSelected()
{
    int i = 0;

    while (i < circles.size())
    {
        if (circles[i]->isSelected())
        {
            delete circles[i];
            circles.erase(circles.begin() + i);
        }
        else
        {
            i++;
        }
    }
}