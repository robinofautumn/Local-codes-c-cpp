#include<iostream>
using namespace std;

inline int prod(int a, int b)
{
    return a*b;
}

int main(){
    int x,y;
    cout<<"enter the value of x: ";
    cin>>x;
    cout<<endl;
    cout<<"enter the value of y: ";
    cin>>y;
    cout<<endl;
    cout<<"Product: "<<prod(x,y)<<endl;
    return 0;
}