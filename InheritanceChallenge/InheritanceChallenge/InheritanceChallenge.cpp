
#include "HeaderClass.h"
#include <iostream>


class RotationalSystemY : public RotationalSystemX
{
protected:

	int yAxis;

public:

	void setAxisY(int set)
	{
		yAxis = set;
	}

	int getAxisY()
	{
		return yAxis;
	}
};


class RotationalSystemZ : public RotationalSystemY
{
protected:

	int zAxis;

public:

	void setAxisZ(int set)
	{
		zAxis = set;
	}

	int getAxisZ()
	{
		return zAxis;
	}
};



int main()
{
    RotationalSystemX positionX;

    positionX.setAxisX(93);

    cout << positionX.getAxisX();



	RotationalSystemY positionY;

	positionY.setAxisY(125);

	cout << positionY.getAxisY();



	RotationalSystemZ positionZ;

	positionZ.setAxisZ(47);

	cout << positionZ.getAxisZ();


	return 0;
}