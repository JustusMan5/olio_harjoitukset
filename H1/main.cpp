#include "funktiot.h"
#include <iostream>
using namespace std;

int main()
{
    int a;
    calcSum(a);

    float b;
    calcDiv(b);

    int number1;
    int number2;

    cout << "Enter a number :" << endl;
    cin >> number1;

    cout << "Enter another number:" << endl;
    cin >> number2;

    int sum = number1 + number2;

    cout << "Sum of the numbers = " << sum << endl;

    int c;
    int summaus = retSum(c);

    cout << "Palautettu summa on : " << summaus << endl;

    int d;
    float jako = retDiv(d);

    cout << "Palautettu jakolasku on : " << jako << endl;

    return 0;
}
