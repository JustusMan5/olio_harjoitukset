#include "exampleclass.h"
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass obj1;
    obj1.startToWait();

    return a.exec();
}
