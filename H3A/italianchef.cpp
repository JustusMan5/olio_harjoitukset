#include "italianchef.h"
#include <iostream>
#include <ostream>

ItalianChef::ItalianChef(const std::string chefName)
    : Chef(chefName)
{
    std::cout<<"ItalianChef "<<name<<" konstruktori"<<std::endl;
}
ItalianChef::~ItalianChef()
{
    std::cout<<"ItalianChef "<<name<<" destruktori"<<std::endl;
}
void ItalianChef::makePasta()
{
    std::cout<<"ItalianChef "<<name<<" makes a pasta"<<std::endl;
}
std::string ItalianChef::getName() const
{
    return name;
}
