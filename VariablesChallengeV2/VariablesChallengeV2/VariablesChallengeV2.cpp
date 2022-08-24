// VariablesChallengeV2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1 = 125, num2 = 457, num3 = 393;
    
    char char1 = 'e', char2 = 'a', char3 = 't';

    double db1 = -31.35, db2 = 47.90, db3 = -86.72;

    bool tf1 = true, tf2 = false;

    string str1 = " Black-Forest-Ham ", str2 = " Feta-Cheese-Sauce ", str3 = " Honey-Mustard-Fried-Pickle-Slices ", str4 = " Butter-Lettuce ", str5 = " Brioche-Bun ";



    cout << "Int Value: " << num1 - num2 + num3 << "\n";
    
    cout << "Double Value: " << db1 + db2 - db3 << "\n";

    cout << "Character Value: " << char1 + char2 + char3 << "\n";

    cout << "String Value --v : " << "\n" << str1 << "\n" << str2 << "\n" << str3 << "\n" << str4 << "\n" << str5 << "\n";

    cout << "Bool Value: ";

    if (tf1 != tf2)
    {
        cout << tf1;
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
