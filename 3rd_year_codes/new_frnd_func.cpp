#include<iostream>
using namespace std;

class Complex;

class Calculator{
public:
    int sumRealComplex(Complex , Complex);

};


class Complex{
int a , b;
friend int Calculator::sumRealComplex(Complex, Complex);
public:
void setNumber(int n1, int n2)
{
    a = n1;
    b = n2;
}
void printNumber()
{
    cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;
}

};


int Calculator:: sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a+o2.a);
}

int main(){
    Complex c1, c2;
    Calculator sum;

    int s;

    c1.setNumber(1,2);
    c1.printNumber();


    c2.setNumber(3,4);
    c2.printNumber();

    s = sum.sumRealComplex(c1,c2);
    cout<<"sum of the real parts is : "<<s<<endl;

    return 0;
}