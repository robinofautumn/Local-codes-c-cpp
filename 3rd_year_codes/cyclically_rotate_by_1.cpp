//O(n) time complexity, O(1) space complexity...
 
#include<iostream>
using namespace std;

int main()
{   int n, a[100], temp, i,j;  
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    temp = a[n-1];
    j=n-2;
    while(j!=-1)
    {
        a[j+1] = a[j];
        j--;
    }
    a[0]=temp;
    cout<<"\nThe array after cyclically rotating by one :"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<endl;
    }
    return 0;
}