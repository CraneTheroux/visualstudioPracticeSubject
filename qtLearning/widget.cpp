#include "widget.h"
#include "./ui_widget.h"
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{

    QPushButton *btn = new QPushButton;

    //btn->show();//show以顶层的方式弹出窗口控件
    btn->setParent(this);//setParent方法可以让控件吸附在主界面上
    btn->setText("第一个按钮");
    QPushButton *btn2 = new QPushButton("第二个按钮",this);
    //重置窗口大小
    this->resize(600,400);
    //移动窗口按钮
    btn2->move(100,100);
    this->setWindowTitle("第一个窗口");

}






Widget::~Widget()
{

}


