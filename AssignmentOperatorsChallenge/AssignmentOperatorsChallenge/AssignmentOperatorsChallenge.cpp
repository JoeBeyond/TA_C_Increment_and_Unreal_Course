
#include <iostream>

using namespace std;

int main()
{
    int num1 = 10;

    cout << "INT : " << num1 << '\n';

    num1 += 15;

    cout << "+= : " << num1 << '\n';

    num1 &= 10;

    cout << "&= : " << num1 << '\n';

    num1 <<= 20;

    cout << "<<= : " << num1 << '\n';
}
