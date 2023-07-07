#include<iostream>
using namespace std;

class Employee{
    private:
    int a, b, c;
    public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
        cout<<"a: "<<a<<endl;
        cout<<"b: "<<b<<endl;
        cout<<"c: "<<c<<endl;
        cout<<"d: "<<d<<endl;
        cout<<"e: "<<e<<endl;
    }
} shiv,harry;
void Employee::setdata(int a1 ,int b1 , int c1)
{
    a=a1;
    b=b1;
    c=c1;
}


int main()
{
    shiv.d=215;
    shiv.e = 23;

    shiv.setdata(1,2,3);
    shiv.getdata();
    return 0;
}