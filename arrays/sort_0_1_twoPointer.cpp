// sort array containing 0 & 1 only, using two pointer approach

#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1};
    int size = sizeof(arr)/sizeof(int);
    int i = 0;
    int j = size-1;
   
    while(i<j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        else
        {
            if(arr[j]==1) j--;
            else
            {
                arr[i] = 0;
                arr[j] = 1;
            }
        }
    }

    for(int i = 0; i<size; i++) 
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}