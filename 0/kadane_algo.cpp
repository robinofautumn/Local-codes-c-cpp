#include<iostream>
using namespace std;

int main()
{
    int a[100], mxsum = 0, sum_till_now=0, i, j, n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"Now, enter the elements in the array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (j = 0; j < n; j++)
    {
        sum_till_now+=a[j];
        if(sum_till_now<=0)
        {
            sum_till_now=0;
        }
        else if (mxsum<sum_till_now)
        {
            mxsum=sum_till_now;
        }
        
    }
    cout<<"\nMaximum sum of contiguous subarray: "<<mxsum;    
    return 0;
}