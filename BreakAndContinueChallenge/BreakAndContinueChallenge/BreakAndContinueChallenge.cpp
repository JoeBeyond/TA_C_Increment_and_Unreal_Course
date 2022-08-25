
#include <iostream>

int main()
{
    using namespace std;

    int db1 = 0;

    int db2 = 0;

    while (db1 < 2)
    {
        for (int num1 = 0; num1 < 10; num1++)
        {
            if (num1 == 5)
            {
                break;
            }

            cout << num1 << " A" << "\n";
        }

        db1++;
    }

    while (db2 < 2)
    {
        for (int num2 = 10; num2 >= 1; num2--)
        {
            if (num2 == 5)
            {
                continue;
            }

            cout << num2 << " B" << "\n";
        }

        db2++;
    }

    
}
