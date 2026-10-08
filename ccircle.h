
#ifndef OOP3_1_CCIRCLE_H
#define OOP3_1_CCIRCLE_H
#include <QPainter>
#include <QPen>

class CCircle {
private:
    int x;
    int y;
    static constexpr int radius = 30;
    bool selected = false;
public:
    CCircle(int x, int y): x(x), y(y) {};
    bool contains(int pointx, int pointy) const;
    void draw(QPainter &painter) const;
    bool isSelected() const;
    void setSelected(bool value);
    void toggleSelected();
};


#endif
