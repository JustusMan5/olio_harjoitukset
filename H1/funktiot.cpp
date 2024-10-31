#include <iostream>
#include "funktiot.h"

using namespace std;

void calcSum(int)
{
    int number1;
    int number2;
    cout << "Enter a number :" << endl;
    cin >> number1;

    cout << "Enter another number:" << endl;
    cin >> number2;

    cout << "summa: " << number1 + number2 << endl;
}

void calcDiv(float)
{
    float number1;
    float number2;

    cout << "Enter a number :" << endl;
    cin >> number1;
    cout << "Enter a number :" << endl;
    cin >> number2;

    float jako;

    if(number2 == 0)
    {
        cout << "Error" << endl;
    } else

    cout << "jaettuna : " << number1 / number2 << endl;
}
int retSum(int)
{
    int number1;
    int number2;

    cout << "Enter a number :" << endl;
    cin >> number1;

    cout << "Enter another number:" << endl;
    cin >> number2;

    int summaus = number1 + number2;
    return summaus;
}

float retDiv(float)
{
    float number1;
    float number2;

    cout << "Enter a number :" << endl;
    cin >> number1;

    cout << "Enter another number:" << endl;
    cin >> number2;

    if(number2 == 0)
    {
        cout << "Error" << endl;
        return 0.0;
    } else
    {
        float jakoLasku = number1 / number2;
        return jakoLasku;

    }
}
