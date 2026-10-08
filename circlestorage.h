
#ifndef OOP3_1_CIRCLESTORAGE_H
#define OOP3_1_CIRCLESTORAGE_H

#include <vector>
#include "ccircle.h"

class CircleStorage {
private:
    std::vector<CCircle *> circles;
public:
    void add(CCircle *circle);
    int getCount() const;
    CCircle *getObject(int index) const;
    ~CircleStorage();
    void clearSelection();
    void removeSelected();
};


#endif
