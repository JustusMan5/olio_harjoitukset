#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
class Animal
{
public:
    virtual void callOut();
    ~Animal(){
        std::cout<<"Animal tuhottu."<<std::endl;
    }
};

#endif // ANIMAL_H
