#include<iostream>
using namespace std;

class Y;//- - -> Forward declaration

class X{
    int data1;
    public:
        void setValue(int v1)
        {
            data1 = v1;
        }
        friend int add(X, Y);
};

class Y{
    int data2;
    public: 
        void setValue(int v2)
        {
            data2 = v2;
        }
        friend int add(X, Y);
};

int add(X x , Y y)
{
    return(x.data1+y.data2);
}

int main(){

    X a;
    Y b;
    a.setValue(0);
    b.setValue(3);
    
    cout<<"The sum of the numbers is: "<<add(a,b)<<endl;

    return 0;
}