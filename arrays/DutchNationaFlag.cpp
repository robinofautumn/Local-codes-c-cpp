// Dutch national flag problem

// ITERATIVE APPROACH

#include<iostream>
using namespace std;
void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}


void swap(int arr[], int x, int y)
{
    int t = arr[x];
    arr[x] = arr[y];
    arr[y] = t;
}


int main(){
        int arr[]={2,1,1,1,2,2,0,2,1,0,0,1,2};
        int n = sizeof(arr)/sizeof(int);

        int mid = 0, low = 0, high = n-1;
        while(mid<high)
        {
            if(arr[mid]==0)
            {
                swap(arr, low, mid);
                low++;
                mid++;
            }
            else if(arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr, mid, high);
                high--;
            }
        }    
        printArray(arr, n);
    return 0;
}

// try recursive way (H.W.)