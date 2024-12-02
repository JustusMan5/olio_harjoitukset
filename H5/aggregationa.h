#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H

#include "classb.h"
class AggregationA
{
private:
    ClassB &refB;
public:
    AggregationA(ClassB&);
    std::string getBinfo();
    void setBinfo(std::string);
};

#endif // AGGREGATIONA_H
