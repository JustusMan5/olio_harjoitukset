#include "car.h"

Car::Car(std::string b, std::string m, int y)
{
    brand = b;
    model = m;
    yearModel = y;
}
Car::~Car(){
    std::cout<<"tuhousta"<<std::endl;
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
    model = newModel;
}
int Car::getYearModel() const
{
    return yearModel;
}
void Car::setYearModel(int newYearModel)
{
    yearModel = newYearModel;
}

void Car::printData()
{
    std::cout<<"-------------"<<std::endl;
    std::cout<<"Brand : "<< brand <<std::endl;
    std::cout<<"Model : "<< model <<std::endl;
    std::cout<<"Year :"<< yearModel <<std::endl;
    std::cout<<"-------------"<<std::endl;
}
