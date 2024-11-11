#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <memory>

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
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<"Area : "<<objRectangle->getArea()<<std::endl;
    std::cout<<"Circ : "<<objRectangle->getCircum()<<std::endl;
    std::cout<<"--------------------------"<<std::endl;
    delete objRectangle;
    objRectangle=nullptr;

    unique_ptr<Student> objStudent=make_unique<Student>();
    objStudent->setName("Juho");
    objStudent->setStudentNumber(27);
    objStudent->setAverage(3);
    std::cout<<"--------------------------"<<std::endl;
    std::cout<<"Name : "<< objStudent->getName()<<std::endl;
    std::cout<<"Student number : "<< objStudent->getStudentNumber()<<std::endl;
    std::cout<<"Grade average : "<< objStudent->getAverage()<<std::endl;
    std::cout<<"--------------------------"<<std::endl;

    return 0;
}
