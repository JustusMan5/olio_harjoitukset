#include "engine.h"

Engine::Engine()
{
}
int Engine::getHorsePower() const
{
    return horsepower;
}
void Engine::setHorsePower(const int newHorsepower)
{
    horsepower = newHorsepower;
}

double Engine::getDisplacement() const
{
    return displacement;
}
void Engine::setDisplacement(const double &newDis)
{
    displacement = newDis;
}
