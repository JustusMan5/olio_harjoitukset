#include "car.h"
#include <memory>

using namespace std;

int main()
{
    unique_ptr<Car> objCar = make_unique<Car>();
    objCar->setModel("Corolla ");
    objCar->setBrand("Toyota ");
    objCar->setEngine();
    objCar->setWheels();
    objCar->printDetails();


    return 0;
}
