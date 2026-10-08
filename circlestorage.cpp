
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
        delete circle;;
    }
}