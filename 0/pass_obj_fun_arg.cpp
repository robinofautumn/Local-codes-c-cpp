#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setData(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print()
    {
        cout<<"The complex number is :"<<a<<" + "<<b<<"i"<<endl;
    }

    void sum(complex o1,complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main(){

    complex c1,c2,c3;
    c1.setData(1,2);
    c1.print();
    c2.setData(3,4);
    c2.print();
    c3.sum(c1,c2);
    c3.print();   

    return 0;
}