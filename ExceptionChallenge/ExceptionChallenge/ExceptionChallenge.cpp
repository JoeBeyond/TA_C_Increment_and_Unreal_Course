
#include <iostream>

using namespace std;

int main()
{
	cout << "What's my age? Enter a number between 20 and 30 \n";

	int myAge = 29;

	try
	{
		int guess;

		cin >> guess;

		if (guess == myAge)
		{
			cout << "That's right! My age is " << myAge;
		}
		else
		{
			throw(guess);
		}
	}
	catch (int myGuess)
	{
		cout << "Guess again! \n";

		cout << "Your Guess was: " << myGuess << "\n";

		cout << "My age is: " << myAge;
	}

	return 0;
}