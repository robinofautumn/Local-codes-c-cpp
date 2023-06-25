
#include<iostream>
using namespace std;

void merge(int a[], int l, int r, int m)
{
    int n1, n2;
    n1 = m-l+1;
    n2 = r-m;
 
    int a1[n1], a2[n2];

    for(int i=0;i<n1;i++)
    {
        a1[i] = a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        a2[j] = a[m+1+j];
    }

    int i=0,j=0,k = l;
    while(i<n1 && j<n2)
    {
        if(a1[i]<a2[j])
        {
            a[k] = a1[i];
            i++;
        }
        else
        {
            a[k] = a2[j];
            j++;
        }
        k++;
    }   
    
    while(i<n1)
    {
        a[k]=a1[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]=a2[j];
        k++;
        j++;
    }
}

void mergesort(int a[], int l, int r)
{
    int mid = (int)(l+r)/2;//tracing the midpoint
    if (l<r)
    {
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,r,mid);
    }
    else
    {
        return;
    }
    
}

int main(){

    int a[20], n;    
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    cout<<"Enter the values in the array: "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergesort(a, 0, n);
    int k;
    int min=0, max=0;
    cout<<"want to find kth min? If yes then enter min = 1"<<"\n"<<"min = ";
    cin>>min;
    if(min==0)
    {
        cout<<"want to find kth max? If yes then enter max = 1"<<"\n"<<"max = ";
        cin>>max;
    }
    cout<<"Enter the value of k: "<<endl;
    cin>>k;
    if(min==1 && k<n)
        cout<<a[k];
    else
        cout<<a[n-k];   
    return 0;
}