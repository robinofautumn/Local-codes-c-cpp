#include<iostream>
using namespace std;

int maxx(int a[], int n)
{
    int i=1, m;
    m=a[0];
    while(i<n)
    {
        if(m<a[i])
        { 
            m=a[i];
        }
        i++;
    }

    return m;
}
int main()
{
    int a[15], i, n;
    cout<<"enter the size of array: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"element "<<i<<" ";
        cin>>a[i];
    }
    cout<<maxx(a,n)<<endl;

    return 0;
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a[10], i, n, m;
//     cout<<"enter value of n: ";
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         cout<<i<<" ";
//         cin>>a[i];
//     }
//     m=a[0];
//     i=1;
//     while(i<n)
//     {
//         if(m<a[i])
//         {
//             m=a[i];
//         }
//         i++;
//     }
//     cout<<m<<endl;
//     return 0;
// }