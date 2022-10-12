// Lab_03_1.cpp
// < Могила Тарас Русланович >
// Лабораторна робота No 3.1
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 21
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main() {
    double x; // вхідний параметр
    double y; // результат обчислення виразу
    double A; // проміжний результат - функціонально стала частина виразу
    double B = 0.0; // проміжний результат - функціонально змінна частина виразу
    
    cout <<"x = "; cin >> x;
    
    A = 2 + 1/abs(1 + x);
    
// first way

    if (x < 1)
    {
        B = sqrt(abs(cos(x)) + 13);
    }
    if (x >=1 && x <=5)
    {
        B = 3 + (cos((4+x)/sqrt(2)) / sin((4+x)/sqrt(2)));
    }
    if (x > 5)
    {
        B = 8 + (0.7 * x);
    }

    y = A - B;

    cout <<endl;

    cout << "1)y = " << y << endl;
    
//  second way
    if (x < 1)
    {
        B = sqrt(abs(cos(x)) + 13);
    }
    else if (x > 5)
    {
        B = 8 + (0.7 * x);
    }
    else
    {
        B = 3 + (cos((4+x)/sqrt(2)) / sin((4+x)/sqrt(2)));
    }
    
    y = A - B;
    
    cout << "2)y = " << y << endl;
    
    cin.get();


    return 0;
}
