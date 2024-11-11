#include "rectangle.h"

void Rectangle::setHeight(const double &newHeight){
    height = newHeight;
}
void Rectangle::setWidth(const double &newWidth){
    width = newWidth;
}
double Rectangle::getArea() const{
    return width * height;
}
double Rectangle::getCircum() const{
    return 2 * (width+height);
}
