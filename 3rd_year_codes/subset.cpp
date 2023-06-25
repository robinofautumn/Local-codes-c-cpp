#include<iostream>
using namespace std;

int main()
{
    int a1[20], a2[20], n, m, i, j, t1,t2, count=0;
    cout<<"enter the value of N: ";
    cin>>n;
    cout<<"\nenter the value of M: ";
    cin>>m;

    cout<<"enter elements in A1: \n";
    for(i=0;i<n;i++)
    {
        cin>>a1[i];
    }
    cout<<"\nenter elements in A2: \n";
    for (j = 0; j < m; j++)
    {
        cin>>a2[j];
    }
    
    for(t1 = 0;t1<m;t1++)
    {
        for(t2=0;t2<n;t2++)
        {
            if(a2[t1]==a1[t2])
            {
                count++;
                break;
            }
        }
    }
    if(count==m)
    {
        cout<<"count: "<<count<<endl;
        cout<<"\nYes"<<endl;
    }
    return 0;
}