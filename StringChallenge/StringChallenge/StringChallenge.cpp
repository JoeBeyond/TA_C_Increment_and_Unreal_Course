
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string hardStr = "Funky ";

    string userStr;

    cout << "Enter a simple word: ";

    cin >> userStr;

    cout << hardStr + userStr;
}
