#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;
public:
    Engine();
    Engine(int, double);
    int getHorsePower() const;
    void setHorsePower(const int newHorsepower);
    double getDisplacement() const;
    void setDisplacement(const double &newDis);
};

#endif // ENGINE_H
