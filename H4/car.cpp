#include "car.h"
#include <iostream>

Car::Car()
{
    objEngine=std::make_unique<Engine>();
    objWheel1=std::make_unique<Wheel>();
    objWheel2=std::make_unique<Wheel>();
    objWheel3=std::make_unique<Wheel>();
    objWheel4=std::make_unique<Wheel>();
}
Car::~Car()
{

}
std::string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const std::string &newBrand)
{
    brand = newBrand;
}

std::string Car::getModel() const
{
    return model;
}

void Car::setModel(const std::string &newModel)
{
    model=newModel;
}

void Car::setEngine()
{
    objEngine->setHorsePower(150);
    objEngine->setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1->setSize(17);
    objWheel2->setSize(17);
    objWheel3->setSize(17);
    objWheel4->setSize(17);

    objWheel1->setType("kesarengas");
    objWheel2->setType("kesarengas");
    objWheel3->setType("kesarengas");
    objWheel4->setType("kesarengas");
}

void Car::printDetails()
{
    std::cout<<"Auto : "<<getBrand()<<getModel()<<std::endl;
    std::cout<<"Moottori : "<<objEngine->getHorsePower()<<" hp, "<<objEngine->getDisplacement()<<" L"<<std::endl;
    std::cout<<"Rengas 1 : "<<objWheel1->getSize()<<" tuumaa, "<<objWheel1->getType()<<std::endl;
    std::cout<<"Rengas 2 : "<<objWheel2->getSize()<<" tuumaa, "<<objWheel2->getType()<<std::endl;
    std::cout<<"Rengas 3 : "<<objWheel3->getSize()<<" tuumaa, "<<objWheel3->getType()<<std::endl;
    std::cout<<"Rengas 4 : "<<objWheel4->getSize()<<" tuumaa, "<<objWheel4->getType()<<std::endl;
}
