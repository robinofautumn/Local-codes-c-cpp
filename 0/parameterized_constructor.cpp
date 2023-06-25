#include <iostream>
#include <cmath>
using namespace std;

class Point;

class Calc
{
public:
    float distance(Point, Point);
};

class Point
{
    int x, y;

public:
    friend float Calc::distance(Point, Point);
    Point(int, int);
    void display()
    {
        cout << "The point is : (" << x << "," << y << ")" << endl;
    }
};
Point::Point(int a, int b)
{
    x = a;
    y = b;
}

float Calc::distance(Point o1, Point o2)
{
    return (sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2)));
}

int main()
{

    Point p1(2, 6), p2(1, 7);
    p1.display();
    p2.display();
    Calc c1, c2;
    cout << "The distance between points p1(2,6) and p2(1,7) is: " << c1.distance(p1, p2) << endl;

    Point p3 = Point(4, 7);
    Point p4 = Point(9, 23);
    p3.display();
    p4.display();
    cout << "The distance between points p1(4,7) and p2(9,23) is: " << c2.distance(p3, p4) << endl;
    return 0;
}