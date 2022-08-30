
#include "Header.h"

#include <iostream>

using namespace std;

int main()
{
    PlayerPoints score;

    score.setScore(100);

    cout << score.getScore() << " POINTS!";

    return 0;
}