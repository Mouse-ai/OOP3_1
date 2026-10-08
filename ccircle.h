
#ifndef OOP3_1_CCIRCLE_H
#define OOP3_1_CCIRCLE_H


class CCircle {
private:
    int x;
    int y;
    static constexpr int radius = 30;
public:
    CCircle(int x, int y): x(x), y(y) {};
    bool contains(int pointx, int pointy) const;
};


#endif
