
#include "OopHeader.h"
#include <iostream>


class FireWolf : public Dog
{
public:
    
    string attribute1 = breed;
    string attribute2 = color;

    double attribute3 = height;
    double attribute4 = weight;
};


int main()
{
    FireWolf firewolf;

    firewolf.Shake();
    cout << "\n";

    firewolf.Sit();
    cout << "\n";

    firewolf.LayDown();
    cout << "\n";


    firewolf.attribute1 = "Firestorm Wolf Spirit";
    firewolf.attribute2 = "Green, Yellow, and Red Inferno";

    firewolf.attribute3 = 144.82;
    firewolf.attribute4 = 144820;


    cout << "BREED: " << firewolf.attribute1 << "\n";
    cout << "COLOR: " << firewolf.attribute2 << "\n";
    cout << "HEIGHT: " << firewolf.attribute3 << " Cubic Meters" << "\n";
    cout << "WEIGHT: " << firewolf.attribute4 << " kg" << "\n" << "\n";
}
