#include "car.h"

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
    std::cout<<"--------------------------"<<std::endl;
    std::cout << "Car brand : " << brand << std::endl;
    std::cout << "Model : " << model << std::endl;
    std::cout << "Yearmodel : " << yearModel << std::endl;
    std::cout<<"--------------------------"<<std::endl;
}
