
#include <iostream>
#include <string>

int main()
{
    using namespace std;


    string liquid = "Water", hydrate = "Gatorade";

    string &thirstQuench = liquid;


    cout << liquid << "\n" << hydrate << "\n";

    cout << thirstQuench << "\n";
}
