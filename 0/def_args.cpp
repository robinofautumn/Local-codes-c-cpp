#include<iostream>
using namespace std;

float money_received(int curr_money, float fact = 1.04)
{
    return curr_money*fact;
}

int main()
{    
    int money ;
    bool is_vip=1;
    float rate;
    
    cout<<"are you a vip? "<<endl;
    cin>>is_vip;
    
    cout<<"enter the principal amount: "<<endl;
    cin>>money;

    if(is_vip)
    {
        rate = 1.2;
        cout<<"So you are a VIP then!!!"<<endl;
        cout<<"The amount after 1 year: "<<money_received(money, rate)<<endl;
        exit(0);
    }
    
    cout<<"The amount after 1 year for a NON VIP : "<<money_received(money)<<endl;

    return 0;
}