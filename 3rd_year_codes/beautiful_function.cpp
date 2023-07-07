#include <bits/stdc++.h>

using namespace std;
int c = 0;
int issingle(int n)
{
    n/=10;
    if(n==0)
        return 1;
    else
        return 0;
}

int beautifulFunction(int N)
{
    N+=1;
    while(!issingle(N))
    {
        if(N%10==0)
        {

            while(N%10==0)
            N/=10;
        }
        else
        {
            c++;
            N += 1;
        }
    }
     if(issingle(N))
        return c+9;
}
int main(){
    int N;
    cin>>N;
    int result;
    result = beautifulFunction(N);
    cout<<result;
    return 0;
}