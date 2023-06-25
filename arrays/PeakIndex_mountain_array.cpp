#include<bits/stdc++.h>
using namespace std;
int peakIndexMountainArray(int arr[],int n)
{
    int start = 0, end = n-1;
            int mid = start + (end-start)/2;
        while(start<end) 
        {        
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]) 
            {
                return mid;
            } else if(arr[mid]<arr[mid-1]) {
                end = mid;
            } else if(arr[mid]<arr[mid+1]) {
                start = mid;
            }
            mid = start + (end-start)/2;
        }
        return mid;
}
int main(){
    int arr[] = {3,5,3,2,0};
    int n = sizeof(arr)/sizeof(int);

    int indx = peakIndexMountainArray(arr,n);
    cout<<"the Peak element "<<arr[indx]<<" is at index "<<indx<<endl;
    return 0;
}