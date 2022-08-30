
#include "HeaderClass.h"
#include <iostream>

//using namespace std;

class Mantis : public Insect
{
public:
    void family()
    {
        cout << "PRAYING MANTISES BELONG TO FAMILY MANTIDAE. \n";
    }
};

class TarantulaHawk : public Insect
{
public:
    void family()
    {
        cout << "TARANTULA HAWKS BELONG TO FAMILY POMPILIDAE. \n";
    }
};

int main()
{
    Insect insect;
    Mantis mantidae;
    TarantulaHawk pompilidae;

    insect.family();
    mantidae.family();
    pompilidae.family();
}