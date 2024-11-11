#include "car.h"
#include "rectangle.h"


using namespace std;

int main()
{
    Car objCar;
    objCar.setBrand("Ford");
    objCar.setModel("Mondeo");
    objCar.setYearModel(2009);
    objCar.printData();

    Rectangle *objRectangle;
    objRectangle=new Rectangle;
    objRectangle->setHeight(4);
    objRectangle->setWidth(7);
    std::cout<<"Pinta-ala : "<<objRectangle->getArea()<<std::endl;
    std::cout<<"Circ : "<<objRectangle->getCircum()<<std::endl;
    delete objRectangle;
    objRectangle=nullptr;

    return 0;
}
