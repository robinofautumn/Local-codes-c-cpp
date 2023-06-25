#include<iostream>
using namespace std;

int main()
{
    int a[20], c[20], n, i, j;
    cout<<"enter the value of n: ";
    cin>>n;
    cout<<"enter the array: "<<endl;

    for(i=0;i<n;i++)     
    {
        cin>>a[i];
    }
     
    for(int z=0;z<20;z++)
    {
        c[z]=0;
    }

    int mx = a[0];
    for(j=1;j<n;j++)
    {
        if(mx<a[j])
        {
            mx=a[j];
        }
    }
    
    int k=0;
    while(k<n)
    {
        c[a[k]] += 1;
        k++;
    }
    int r;
    for(r=0; r<=mx; r++)
    {
        if(c[r]>1)
        {
            break;
        }
    }
    cout<<"\nthe duplicate element is: "<<r;
    return 0;
}