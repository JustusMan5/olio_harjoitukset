#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H
#include "classb.h"

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    std::string getBinfo();
    void setBinfo(std::string);
};

#endif // ASSOSIATIONA_H
