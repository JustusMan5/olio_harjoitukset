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
    Car(std::string, std::string, int);
    ~Car();
    std::string getBrand() const;
    void setBrand(const std::string &newBrand);
    std::string getModel() const;
    void setModel(const std::string &newModel);
    int getYearModel() const;
    void setYearModel(int newYearModel);
    void printData();
};

#endif // CAR_H
