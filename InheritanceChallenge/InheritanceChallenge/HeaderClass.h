#pragma once

#include<iostream>

using namespace std;

class RotationalSystemX
{
protected:

	int xAxis, yAxis, zAxis;

public:

	void setAxisX(int set)
	{
		xAxis = set;
	}

	int getAxisX()
	{
		return xAxis;
	}
};