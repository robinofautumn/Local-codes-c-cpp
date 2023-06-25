#include<bits/stdc++.h>

using namespace std;

int main(){
    int arr[]={1,2,3,1,4,3};

    map<int,int> m;
    vector<int>v;

    for(int i=0; i<sizeof(arr)/sizeof(int);i++)
    {
        m[arr[i]]++;
        if(m[arr[i]]>1) v.push_back(arr[i]);
    }
    for(int i = 0; i<2; i++) cout<<v[i]<<" ";
    return 0;
}