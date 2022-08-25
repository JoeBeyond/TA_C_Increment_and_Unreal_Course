
/* This Program will be exaplained; multiple INTS are declared at the top of main(), where then num1 is displayed to the console followed by a new line. Repeat process for num2, and then display an calculation using num1 and num2 where the sum of both is found, followed by a new line. Then the user is prompted to enter in a number which is followed by a new line, before the value is then stored in num3 and then finally, the sum of num3 and num4 will be found. num4 is a combination of num1 and num2. This program accesses the IOSTREAM library and utilizes the namespace STD in order to shorten cout and cin commands. */

#include <iostream>

using namespace std;

int main()
{
    int num1 = 1, num2 = 2, num3, num4 = num1 + num2;

    cout << num1 << '\n';

    cout << num2 << '\n';

    cout << num1 + num2 << '\n';

    cout << "Enter a number. \n";

    cin >> num3;

    cout << num3 + num4;
}
