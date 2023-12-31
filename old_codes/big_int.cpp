#include<iostream>
using namespace std;

int multiply(int res[], int res_size, int x);

void factorial(int n)
{
    int res[500];
    int res_size = 1;
    res[0]=1;
    for(int x =2;x<=n;x++)
        res_size = multiply(res, res_size,  x);
    int count = 0;
    for(int i = res_size - 1; i>=0;i--)
    {
        cout<< res[i];
        count++;
    }
    cout<<"\n"<<count;
}

int multiply(int res[], int res_size, int x)
{
    int carry = 0;
    for(int i = 0 ; i<res_size; i++)
    {
        int prod = res[i]*x+carry;
        res[i] = prod%10;
        carry = prod/10;
    }

    while(carry)
    {
        res[res_size] = carry%10;
        carry/=10;
        res_size++;
    }
    return res_size;        
}

int main()
{
    factorial(100);
    return 0;
}
