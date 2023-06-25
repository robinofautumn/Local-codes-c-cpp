#include<iostream>
using namespace std;

int main() 
{
    int a[20], b[20], c[20], n, m, i, j, k, t;   
    cout<<"Enter the value of N: ";
    cin>>n;
    cout<<"\nEnter the value of M: ";
    cin>>m;
    k = m+n;

    cout<<"enter the elements in the array(A) with N elements: \n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the elements in the array(B) with M elements: \n";
    for(j=0;j<m;j++)
    {
        cin>>b[j];
    }

    for (int temp = 0; temp < n; temp++)
    {
        c[temp] = a[temp];
    }

    for (j = 0; j < m; j++)
    {
        for(t=0;t<n;t++)
        {
            if(b[j]==a[t])
                break;
        }
        if(t==n)
        {
            c[i]=b[j];
            i++;
        }
    }
    cout<<"the union of two arrays--------------"<<endl;
    for(int num = 0;num<i;num++)
    {
        cout<<c[num]<<endl;
    }
    return 0;
}