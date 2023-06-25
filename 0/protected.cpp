#include <iostream>
using namespace std;

class Base
{
    int a;

protected:
    int b;

public:
    int c;
    void setData()
    {
        a = 10;
        b = 20;
        c = 30;
    }
    void getData()
    {
        cout << "The value of a: " << a << endl
             << "The value of b: " << b << endl
             << "The value of c: " << c << endl;
    }
};

class Derived : protected Base
{
    int x;

public:
    void setData1()
    {
        setData();
        x = 1;
    }
    void process()
    {
        // a +=x; ---> can't do that... coz 'a' is private to Base class...
        b += x;
        c += x;
    }
    void getData1()
    {
        cout << "The value of x: " << x << endl
             << "The value of b: " << b << endl
             << "The value of c: " << c << endl;
    }
};

int main()
{
    Base b1;
    Derived d1;
    b1.setData();
    b1.getData();
    d1.setData1();
    d1.process();
    d1.getData1();

    return 0;
}