#include<iostream>
using namespace std;

int main(){
    int arr[] = {21,19,32,19,21};
    int n = sizeof(arr)/sizeof(int);
    int sum = 0;
    for(int i = 0; i< n; i++)
    {
        sum^=arr[i];
    }

    cout<<"unique element is :"<<sum<<endl;
    return 0;
}