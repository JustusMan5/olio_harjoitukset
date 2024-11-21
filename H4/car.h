#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
#include <string>
#include <memory>

class Car
{
public:
    Car();
    ~Car();
    Car(std::string, std::string);
    void setEngine();
    void setWheels();
    std::string getModel() const;
    void setModel(const std::string &newModel);
    std::string getBrand() const;
    void setBrand(const std::string &newBrand);
    void printDetails();

private:
    std::string model;
    std::string brand;
    std::unique_ptr<Engine> objEngine;
    std::unique_ptr<Wheel> objWheel1;
    std::unique_ptr<Wheel> objWheel2;
    std::unique_ptr<Wheel> objWheel3;
    std::unique_ptr<Wheel> objWheel4;

};

#endif // CAR_H
