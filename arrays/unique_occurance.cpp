// unique occurances or not in array using MAP stl-->accepted at leetcode

// can be optimized

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {-3,-3,0,1,-3,1,1,-3,10,0};
    
    int n = sizeof(arr)/sizeof(int);
    
    map <int, int> m;
    
    map<int,int> m2;

    for(int i=0; i<n; i++)
    {
        m[arr[i]]++;
    }
    map<int,int>::iterator it = m.begin();
    map<int, int>::iterator it2 = m2.begin();
    bool exp=true;
    while(it!=m.end())
    {
        if(m2[it->second]==0) m2[it->second] = it->first;
        else 
        {
            exp = false;
            break;
        }
        ++it;
    }
    cout<<"There are unique occurances: "<<exp;
    return 0;
}