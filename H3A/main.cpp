#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    ItalianChef objIChef("Anthony Bourdain");

    objIChef.makeSalad();
    objIChef.makeSoup();
    objIChef.makePasta();
    std::cout<<"Name of the Italian Ched is "<<objIChef.getName()<<std::endl;
    return 0;
}
