
#include <iostream>

using namespace std;

int main()
{
    int num1 = 20;

    int num2 = 40;
    
    int num3 = 60;
    
    int num4 = 80;

    cout << "Addition: " << num1 + num3 << '\n';

    cout << "Subtraction: " << num4 - num1 << '\n';

    cout << "Multiplication: " << num2 * num4 << '\n';

    cout << "Division: " << num4 / num2 << '\n';

    cout << "INC1: " << ++num4 << '\n' << "INC2: " << ++num3 << '\n' << "INC3: " << ++num2 << '\n' << "INC4: " << ++num1 << '\n';
}