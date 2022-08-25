
#include <iostream>

int main()
{
    using namespace std;

    int tickets = 1;

    while (tickets <= 3)
    {
        cout << "You bought " << tickets << " Concert Tickets" << "\n";
        tickets++;
    }

    cout << "Thank you for your purchase!";
}
