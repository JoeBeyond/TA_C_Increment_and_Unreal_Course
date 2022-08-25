
#include <iostream>

int main()
{
    using namespace std;

    int oranges = 2;

    int kiwis = 10;

    do
    {
        cout << oranges << " Oranges!" << "\n";
        oranges++;

        cout << kiwis << " Kiwis?" << "\n";
        kiwis--;
    } 
    while (oranges <= 10 && kiwis >= 2);
}
