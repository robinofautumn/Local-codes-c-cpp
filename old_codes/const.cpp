#include<iostream>
using namespace std;

int main(){
    char a = 'A', b = 'B';
    const char *p ;
    char *x;
    x = &a;
    p = &b;
    cout<<"value of *p is: "<<*p<<endl;
    cout<<"value of p is: "<<p<<endl;
    cout<<"\n\nvalue of *x: "<<*x<<endl;
    cout<<"value of x: "<<x<<endl;
    return 0;
}