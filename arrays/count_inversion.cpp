#include<iostream>
using namespace std;

long long merge(int *arr,int l,int mid, int r)
{
    long long count = 0;
    int n1, n2;
    n1 = mid-l+1;
    n2 = r-mid;

    int a[n1],b[n2];

    for(int i=0; i<n1; i++)
    {
        a[i] = arr[l+i];
    }
    for(int j = 0; j<n2; j++)
    {
        b[j] = arr[mid+1+j];
    }

    int i=0, j=0, k = l;
    while(i<n1 and j<n2)
    {
        if(a[i]<=b[j]) arr[k++] = a[i++];
        else 
        {
            arr[k++] = b[j++];
            count += n1-i;
        }
    }
    while(i<n1)
    {
        arr[k++] = a[i++];
    }
    while(j<n2)
    {
        arr[k++] = b[j++];
    }

    return count;
}

long long mergesort(int *arr, int l, int r)
{
    long long count=0;
    if(l>=r) return count;
    int mid = (l+r)/2;
    count+=mergesort(arr, l, mid);
    count+=mergesort(arr, mid+1, r);
    count+=merge(arr,l,mid,r);
    return count;
}

long long inv(int *arr,int n)
{
    
    return mergesort(arr,0,n-1);
}
int main(){
    int arr[]={1,3,4,6,2,2,5};

    int n = sizeof(arr)/sizeof(int);

    for(int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    cout<<"inversion count is : "<< inv(arr,n)<<endl;

    return 0;
}