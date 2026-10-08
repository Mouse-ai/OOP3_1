
#include "ccircle.h"

bool CCircle::contains(int pointx, int pointy) const {
    int dx = pointx - x;
    int dy = pointy - y;

    return dx*dx + dy*dy <= radius*radius;
}
