
//Method overriding in C++

#include <iostream>
using namespace std;
class B
{
public:
    void say()
    {
        cout << "Hello world!!\n";
    }
};

class D : public B
{
// public:
//     void say()
//     {
//         cout << "Hello India!!\n";
//     }
};

int main()
{
    B b;
    b.say();

    D d;
    d.say();
    return 0;
}