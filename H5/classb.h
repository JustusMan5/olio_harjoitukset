#ifndef CLASSB_H
#define CLASSB_H
#include <string>

class ClassB
{
public:
    ClassB();
    std::string getInfo() const;
    void setInfo(const std::string newInfo);
private:
    std::string info;
};

#endif // CLASSB_H
