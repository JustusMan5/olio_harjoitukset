#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle(){
        std::cout<<"Rectangle olio luotu"<<std::endl;
    }
    ~Rectangle(){
        std::cout<<"Rectangle olio tuhottu"<<std::endl;
    }
    void setWidth(const double &newWidth);
    void setHeight(const double &newHeight);
    double getArea() const;
    double getCircum() const;

};

#endif // RECTANGLE_H
