
// USING Map in C++ STL

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> m;

    int arr[] = {11,23,21,23,11};



    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size; i++)
    {
        m[arr[i]]+=1;
    }
    
    for(int k = 0; k<m.size();k++)
    {
        if(m[k]==1) cout<<k<<endl;
    }
    return 0;
}