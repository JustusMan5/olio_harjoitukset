#ifndef CHEF_H
#define CHEF_H
#include <string>

class Chef
{
protected:
    std::string name;
public:
    Chef(const std::string chefName);
    ~Chef();
    void makeSalad();
    void makeSoup();
};

#endif // CHEF_H
