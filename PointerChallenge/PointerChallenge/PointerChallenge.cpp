
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string b1 = "Lemon";

    int a1 = 450;

    string* ptr1 = &b1;

    int* ptr2 = &a1;

    cout << a1 << " " << '\n';

    cout << b1 << " " << '\n';
}
