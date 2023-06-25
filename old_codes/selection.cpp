#include<iostream>
using namespace std;

int main(){
    int temp, i, j, x, min, n, a[10];
    cout<<"enter the length of array: ";
    cin>>n;
    cout<<"enter the array: ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            min = j;
        }
        if(i!=min)
        {
            temp = a[i];
            a[i]=a[min];
            a[min] = temp;
        }
    }
    cout<<"\n\nThe sorted array is: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}