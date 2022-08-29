#include "Header.h"
#include <iostream>

void DiffClass::Math2()
{
    int a3 = 3;
    int a4 = 2;

    cout << a3 << "\n" << a4 << "\n" << a3 - a4 << "\n";
}

int main()
{
    SumClass sum;
    sum.Math1();


    DiffClass diff;
    diff.Math2();
}
