#include<iostream>
using namespace std;

int main()
{
    int a[10], i, temp, j, midl, n;
    cout<<"value of n: "<<endl;//capacity of array.
    cin>>n;
    midl=(int)(n-1)/2;//tracing the index of middle element.
    cout<<"enter the values in the array:----> "<<endl;//elements in the array.
    for(i=0;i<n;i++)//filling the array with the elements.
        cin>>a[i];
    i=0;
    j=n-1;
    while(i!=midl)//reversing the array.
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    cout<<"\n\n"<<"--------------------------"<<endl;
    for(int k=0;k<n;k++)//print the reversed array.
        cout<<a[k]<<endl;

    return 0;
}