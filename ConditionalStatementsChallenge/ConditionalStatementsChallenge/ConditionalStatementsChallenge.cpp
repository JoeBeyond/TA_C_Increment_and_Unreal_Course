
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1, num2, num3, num4, num5;
    string str1 = "Safari", str2 = "Ocean", str3 = "Jungle";

    cout << "Input a number (1/5). \n";

    cin >> num1;

    cout << "Input a number (2/5). \n";

    cin >> num2;

    cout << "Input a number (3/5). \n";

    cin >> num3;

    cout << "Input a number (4/5). \n";

    cin >> num4;

    cout << "Input a number (5/5). \n";

    cin >> num5;
    
    if (num1 == num2)
    {
        cout << str1 << '\n';
    }

    string result = (num3 > num4) ? str2 : str3;

    cout << result << '\n';

    int amountOfAnimals = 2;
    switch (amountOfAnimals)
    {
    case 1:
        cout << num4;
        break;
    case 2:
        cout << "There are, " << num5 << " animals in the chosen environment.";
        break;
    }
}