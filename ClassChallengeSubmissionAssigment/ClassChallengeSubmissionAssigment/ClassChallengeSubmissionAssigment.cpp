
#include "ClassShape.h"
#include <iostream>

using namespace std;


class Rectangle : public Shape
{
public:

    string recColor = color;

    float recHeight = 12.13f;
    float recWidth = 9.77f;

    void getArea()
    {
        cout << "AREA OF RECTANGLE: " << '\n' << recWidth * recHeight << '\n';
    }
};

class Triangle : public Shape
{
public:

    string tAngleColor = color;

    float tAngleBase = 10.35f;
    float tAngleHeight = 24.85f;
    float half = 0.5f;

    void getArea()
    {
        cout << "AREA OF TRIANGLE: " << tAngleBase * tAngleHeight / half << '\n';
    }
};

class Circle : public Shape
{
public:

    string circleColor = color;

    float circleRadius = 38.26f;
    float pie = 3.14f;

    void getArea()
    {
        cout << "AREA OF CIRCLE: " << pie * circleRadius << '\n';
    }
};


int main()
{
    Rectangle recShape;
    Triangle triShape;
    Circle cirShape;


    recShape.recColor = "RED RECTANGLE";
    triShape.tAngleColor = "GREEN TRIANGLE";
    cirShape.circleColor = "YELLOW CIRCLE";


    recShape.getArea();
    triShape.getArea();
    cirShape.getArea();

    
    cout << recShape.recColor << '\n';
    cout << triShape.tAngleColor << '\n';
    cout << cirShape.circleColor << '\n';


    return 0;
}
