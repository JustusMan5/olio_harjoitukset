#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>


class Car
{
private:
    std::string brand;
    std::string model;
    int yearModel;
public:
    Car(){
        std::cout<<"Car olio luotu"<<std::endl;
    }
    ~Car(){
        std::cout<<"Car terminated!"<<std::endl;
    }
    void printData();
    std::string getBrand() const;
    void setBrand(const std::string &newBrand);
    std::string getModel() const;
    void setModel(const std::string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
};

#endif // CAR_H
