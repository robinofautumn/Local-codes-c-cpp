#include<iostream>
using namespace std;

int Integer(int n)
{

    if(n==0||n==1) return n;

    int l = 1, h = n;
    int mid = l+(h-l)/2;
    int ans = -1;
    while(l<=h)
    {
        int square = mid*mid;
        if(square==n) return mid;
        else if(square<n)
        {
            ans = mid;
            l=mid+1;
        }
        else h = mid-1;

        mid = l+(h-l)/2;
    }
    return ans;
}

double final(int pres, int n)
{
    double factor = 1;
    double ans = Integer(n);
    for(int i=0; i<pres; i++)
    {
        factor/=10;
        for(double j=ans; j*j<=n; j+=factor)
        {
            ans = j;
        }
    }
    return ans;

}

int main()
{
    int n;
    int b=1;
    while(b){

    cout<<"enter the number: "<<endl;
    cin>>n;

    cout<<"square root of "<<n<<" is: "<<final(5, n)<<endl;
    cout<<"enter the val of b: "<<endl;
    cin>>b;
    if(b==0) break;
    }
    
    return 0;
}