#include<iostream>
using namespace std;

int main(){
    for(int i = 1; i<=5; i++)
    {
        cout<<"*";
        if(i == 5)
        {
            for(int l = 0;l<4;l++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j = 0;j<i-1; j++)
            {
                cout<<"*";
            }
        }
        if(i!=1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}