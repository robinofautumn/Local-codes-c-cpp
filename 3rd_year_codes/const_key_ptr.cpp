#include<iostream>
using namespace std;

int main(){
    char a = 'A'; 
    const char b='B';
    const  char *p = &a;
    cout<<"value pointed by p (*p) = "<<*p<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"\n";
    p = &b;
    cout<<"new value pointed by p (*p) = "<<*p<<endl;
    cout<<"p = "<<p<<endl;
    cout<<p<<endl;

    
    return 0;
}