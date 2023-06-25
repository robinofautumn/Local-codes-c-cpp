#include<iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int start, mid, end;
    start = 0; 
    end = n;
    mid = start + (end-start)/2;

    while(start<end)
    {
        if(arr[mid]>arr[0]) start = mid+1;

        else end = mid;

        mid=start+(end-start)/2;
    }

    cout<<"the pivot element "<<arr[start]<<" is at index "<<start<<endl;

    return 0;
}