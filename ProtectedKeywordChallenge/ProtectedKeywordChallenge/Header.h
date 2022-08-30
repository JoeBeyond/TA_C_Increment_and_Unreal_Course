#pragma once

class Password
{
protected:
	int password;

public:
	void setPass(int set)
	{
		password = set;
	}

	int getPass()
	{
		return password;
	}
};