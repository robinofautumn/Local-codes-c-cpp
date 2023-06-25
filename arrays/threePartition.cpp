// on the grounds of DUTCH NATIONAL FLAG PROBLEM
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]= {1,2,3,3,4};
    cout<<"before dnf algo: ";
    for(int i=0; i<sizeof(arr)/sizeof(int);i++) cout<<arr[i]<<" ";
    cout<<endl;
    int a = 1, b = 2;
    int l=0, m=0, h=sizeof(arr)/sizeof(int) -1;
    while(m<h)
    {
        if(arr[m]<a) 
        {
            swap(arr[m],arr[l]);
            l++;
            m++;
        }
        else if(arr[m]>=a&&arr[m]<=b)
        {
            m++;
        }
        else if(arr[m]>b)
        {
            swap(arr[m],arr[h]);
            h--;
        }
    }
        cout<<"after dnf algo: ";
        for(int i=0; i<sizeof(arr)/sizeof(int);i++) cout<<arr[i]<<" ";
        cout<<endl;
    return 0;
}