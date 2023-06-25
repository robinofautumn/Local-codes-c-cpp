#include<iostream>
using namespace std;

int binarySearch(int *a, int n, int key)
{
    int start = 0, end = n-1; 
    
    int mid = start+(end-start)/2; // NOTE

    while(start<=end)
    {
        if(a[mid] == key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2; // NOTE 
    }
    return -1;
}
int main(){
    int arr[] = {21,32,43,66,78,90,104};
    int x,size;
    size = sizeof(arr)/sizeof(int);
    // cout<<"enter the key: "<<endl;
    // cin>>x;
    for(int i=0; i<size; i++)
    {
        x = arr[i];
        cout<<"the index of "<<x<<" is: "<<binarySearch(arr,size,x)<<endl;
    }

    return 0;
}