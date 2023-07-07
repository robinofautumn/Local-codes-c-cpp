//same function name from different base classes
#include<iostream>
using namespace std;
class Base1
{
    int a;
    public:
        void greet()
        {
            cout<<"Hello World!!"<<endl;
        }
};

class Base2
{
    public: 
        void greet()
        {
            cout<<"Hello India!!"<<endl;
        }
};

class Derived:public Base1, public Base2
{
    public:
        void greet()
        {
            Base1::greet();
        }

};

int main(){
    Base1 b1;
    b1.greet();

    Base2 b2;
    b2.greet();

    Derived d;
    d.greet();

    return 0;
}