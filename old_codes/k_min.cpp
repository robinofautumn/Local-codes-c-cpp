#include<iostream>
using namespace std;

int idx(int a[], int n , int e)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==e)
        return i;
    }
}
int main()
{
    int a[100], i, j, k, temp,c, n, mn;
    cout<<"enter n: ";
    cin>>n;
    cout<<endl;
    cout<<"enter the array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter k: ";
    cin>>k;
    cout<<"\n";
    
    c=1;
    do
    {
        mn=a[c-1];
        for(i=c;i<n;i++)
        {
            if(mn>a[i])
            mn=a[i];
        }
        j = idx(a,n,mn);
        swap(a[j], a[c-1]);

    }while(c!=k);
    
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a[k-1];
 
    return 0;
}