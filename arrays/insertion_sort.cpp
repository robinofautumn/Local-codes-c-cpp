#include<iostream>
using namespace std;

void Print(int *arr, int n)
{
    for(int i = 0; i<n; i++) cout<<arr[i]<<" ";
}

int main(){
    int arr[] = {12,4,11,30,2,16};
    int n = sizeof(arr)/sizeof(int);
    Print(arr, n);
    cout<<endl<<"***"<<endl;
    for(int i = 1; i<n; i++)
    {
        int k = arr[i];
        int j = i-1; 
        while(k<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
    Print(arr,n);

    return 0;
}