
#include <iostream>

#include "Header.h"

int main()
{
    using namespace std;

    myFeatures(2, 10);

    myHeight();

    cout << myCoffee(0);

    cout << " Coffees are needed. Ahhh soon. \n";

    int conjureCaffA = 0;

    int conjureCaffB = 1;

    cout << conjureCaffA << conjureCaffB << " Coffee," << "\n";

    extendCoffee(conjureCaffA, conjureCaffB);

    cout << "Turns into " << conjureCaffA << conjureCaffB << " coffees!" << "\n";

    double extraThings = myFeatures(8.376, 24.957);

    cout << extraThings << " Extra Eyes and Fingers because of Sacred Coffee Magic! NOOOO! \n \n";

    return 0;
}
