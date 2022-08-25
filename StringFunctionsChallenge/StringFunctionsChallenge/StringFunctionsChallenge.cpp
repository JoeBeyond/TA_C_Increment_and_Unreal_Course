
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "PATA";

    cout << str1 << "\n" << str1.length() << "\n" << str1[1] << "\n";

    str1[0] = 'C';

    cout << str1;
}