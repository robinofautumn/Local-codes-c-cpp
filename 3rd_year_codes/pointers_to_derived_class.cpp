#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of base class variable var_base is: " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of base class variable var_base is: " << var_base << endl;
        cout << "The value of derived class variable var_derived is: " << var_derived << endl;
    }
};

int main()
{
    Base *Base_pointer;
    Derived obj_derived;
    Derived *Derived_pointer;
    Derived_pointer = &obj_derived;

    Base_pointer = &obj_derived;
    Base_pointer->var_base = 45;
    Base_pointer->display();
    Derived_pointer->var_derived = 23;
    Derived_pointer->display();

    return 0;
}