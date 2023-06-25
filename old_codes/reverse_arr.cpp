#include<iostream>
using namespace std;

int main(){
    int a1[15],a2[15], n,i,j=0;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cout<<"element "<<k<<" ";
        cin>>a1[k];
    }
    //loop to reverse the array
    for(i=n-1;i>=0;i--)
    {
        a2[j]=a1[i];
        j++;
    }
    for(int k=0; k<n; k++)
    {
        cout<<a1[k]<<"\t\t"<<a2[k]<<endl;
    }
    return 0;
}