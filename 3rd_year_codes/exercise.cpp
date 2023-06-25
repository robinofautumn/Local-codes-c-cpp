#include <iostream>
#include <cmath>
using namespace std;

class simple
{
public:
    simple() {}
    void sum(int x, int y)
    {
        cout << "Sum = " << x + y << endl;
    }
    void div(int x, int y)
    {
        cout << "Quotient = " << float(x) / float(y) << endl;
    }
    void display_simple()
    {
        int val1, val2;
        cout << "Enter val1: " << endl;
        cin >> val1;
        cout << "Enter val2: " << endl;
        cin >> val2;
        sum(val1, val2);
        cout << "Enter val1: " << endl;
        cin >> val1;
        cout << "Enter val2: " << endl;
        cin >> val2;
        div(val1, val2);
    }
};

class Scientific
{
public:
    Scientific() {}
    void sine(int x)
    {
        cout << "Sin(" << x << ") = " << sin(x);
    }
    void display_scientific()
    {
        int val;
        cout << "Enter val: " << endl;
        cin >> val;
        sine(val);
    }
};

class Hybrid : public simple, public Scientific
{
public:
    Hybrid() {}
    void display_hybrid()
    {
        display_simple();
        display_scientific();
    }
};

int main()
{
    Hybrid h;
    h.display_hybrid();
    return 0;
}