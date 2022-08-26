#pragma once

void myFeatures(int eyes, int fingers)
{
	using namespace std;

	cout << "I have " << eyes << " molasses eyes, and thankfully " << fingers << " fingers still. \n";
}

void myHeight()
{
	using namespace std;

	int heightFeet = 5;

	float heightInches = 11.92;

	cout << "I am " << heightFeet << " Feet and ";

	cout << heightInches << " Inches; I'm so close to 6ft." << "\n";

}

int myCoffee(int coffeeNeeded)
{
	using namespace std;

	return 3 + coffeeNeeded;
}

void extendCoffee(int& cast, int& expansion)
{
	int magic = cast;

	cast = expansion;
	expansion = magic;
}

double myFeatures(double eyes, double fingers)
{
	using namespace std;

	return eyes + fingers;
}
