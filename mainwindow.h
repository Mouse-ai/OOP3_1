
#ifndef OOP3_1_MAINWINDOW_H
#define OOP3_1_MAINWINDOW_H
#include <QMouseEvent>
#include <QPaintEvent>
#include <QWidget>

#include "circlestorage.h"

class Mainwindow: public QWidget {
public:
    explicit Mainwindow(QWidget *parent = nullptr);
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;

private:
    CircleStorage storage;
};


#endif //OOP3_1_MAINWINDOW_H
