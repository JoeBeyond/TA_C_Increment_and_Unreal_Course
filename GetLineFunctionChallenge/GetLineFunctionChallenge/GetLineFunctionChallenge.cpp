
#include <iostream>
#include <string>

// using namespace std;

int main()
{
	using namespace std;

	string favoriteColor;

	cout << "Please type in your favorite color: ";

	getline(cin, favoriteColor);

	cout << "Your favorite color is: " << favoriteColor;
}
