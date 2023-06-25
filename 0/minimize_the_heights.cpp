#include<iostream>
using namespace std;

int main()
{
    int a[20], i, j, k, n, max, min;
    
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the value of k: ";
    cin>>k;
    cout<<"enter the array: "<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }    
    
    for(j=0;j<n;j++)
    {
        if(k<a[j])
        {
            a[j]-=k;
        }
        else
        {
            a[j]+=k;
        }
    }
    cout<<"---------------------------------------"<<endl;
    
    for(int c=0;c<n;c++)
    {
        cout<<a[c]<<endl;
    }

    min = a[0];
    max = a[0];

    for(int k = 1; k<n; k++)
    {
        if(max<a[k])
        {
            max = a[k];
        }
        if(min>a[k])
        {
            min = a[k];
        }
    }

    int difference = max - min;
    cout<<"\n\nminimum difference is: "<<difference<<endl;

    return 0;
}