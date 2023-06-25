#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[20], lo, m, i, j, n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the elements in the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }    
    lo=0;
    m = 0;
    int nature = 0;
    while(m<n)
    {
        if(a[m]<0)
        {
            swap(a[m],a[lo]);
            lo++;
        }    
        m++;
    }
    cout<<"\nThe array after shift of negative numbers-----"<<endl;
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<endl;
    }

    return 0;
}