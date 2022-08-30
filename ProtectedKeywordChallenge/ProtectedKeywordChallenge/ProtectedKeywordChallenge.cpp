
#include "Header.h"
#include <iostream>

using namespace std;

class Extend : public Password
{
public:
	int extend;

	void setExtn(int set)
	{
		extend = set;
	}

	int getExtn()
	{
		return extend;
	}
};

int main()
{
	Extend extension;
	extension.setPass(5257);
	extension.setExtn(6353);
	cout << extension.getPass() << extension.getExtn();
	return 0;
}
