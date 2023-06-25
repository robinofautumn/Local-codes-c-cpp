#include<iostream>
using namespace std;

int main(){
    int a;
    int *ptr = &a;
    cout<<"The value of a: "<<*ptr<<endl;
    cout<<"The value of ptr: "<<ptr<<endl;
    cout<<"the value of ptr + 1: "<<ptr+1<<endl;
    cout<<"The value of *(ptr+1): "<<*(ptr+1)<<endl;//koi garbage value milegi coz we haven't initialized the address "ptr+1".

    return 0;
}