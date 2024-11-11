#include "car.h"
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    Car objCar0("Ford", "Mondeo", 2009);
    Car objCar1("Toyota", "Corolla", 2010);
    Car objCar2("Audi", "A3", 2000);

    carList.push_back(objCar0);
    carList.push_back(objCar1);
    carList.push_back(objCar2);

    carList[1].printData();

    for(int x=0; x<=2; x++){
        carList[x].printData();
    }
    return 0;
}
