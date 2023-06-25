#include<stdio.h>
#include<conio.h>
int getMax(int arr[], int n)
{
    int mx=arr[0];
    int i;
    for(i=1;i<n;i++)
    {
        if(arr[i]>mx)
            mx=arr[i];
    }
    return mx;
}
void countsort(int arr[],int n, int exp)
{
    int outputarr[n];
    int i, count[10]={0};
    
    for(i=0;i<n;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for(i=1;i<10;i++)
        count[i]+=count[i-1];
    for(i=n-1;i>=0;i--)
    {
        outputarr[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(i=0;i<n;i++)
        arr[i]=outputarr[i];
}
void radixsort(int arr[], int n)
{
    int m = getMax(arr, n);
    int exp;
    for(exp=1;m/exp>0;exp*=10)
    {
        countsort(arr,n,exp);
        print(arr,n);
    }
    
    
}
void print(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\n-----------------------------------\n");
}
int main()
{
    int arr[]={170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr,n);
    //print(arr,n);
    return 0;
}
