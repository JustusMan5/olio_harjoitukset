#include "chef.h"
#include <iostream>
#include <ostream>


Chef::Chef(const std::string chefName)
{
    name = chefName;
    std::cout<<"Chef "<<name<<" konstruktori"<<std::endl;
}

Chef::~Chef()
{
    std::cout<<"Chef "<<name<<" destruktori"<<std::endl;
}

void Chef::makeSalad()
{
    std::cout<<"Chef "<<name<<" makes a salad"<<std::endl;
}

void Chef::makeSoup()
{
    std::cout<<"Chef "<<name<<" makes a soup"<<std::endl;
}
