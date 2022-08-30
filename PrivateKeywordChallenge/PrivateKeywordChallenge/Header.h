#pragma once

class PlayerPoints
{
private:
	int points;

public:
	int setScore(int set)
	{
		points = set;
		return 0;
	}

	int getScore()
	{
		return points;
	}
};