
#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string dwarf = "Berly";

    string* point = &dwarf;

    cout << *point << " The Dwarf!" << endl;
}
