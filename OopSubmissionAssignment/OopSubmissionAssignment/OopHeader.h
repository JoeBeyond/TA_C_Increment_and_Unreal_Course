#pragma once
#include <string>
#include <iostream>

using namespace std;

class Dog
{
public:

	string breed;
	string color;

	double height;
	double weight;

	void Shake()
	{
		cout << "\"Shake Shake\"";
	}

	void Sit()
	{
		cout << "\"Sits\"";
	}

	void LayDown()
	{
		cout << "\"Lays Down\"";
	}
};