#include<iostream>
using namespace std;


class binary
{
    private:
        string s;
        void chk_bin();

    public:
        void read();
        void ones_complement();
        void display();
};


void binary::read()
{
    cout<<"Enter the binary number: ";
    cin>>s;
}


void binary::chk_bin()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&& s.at(i)!='1')
        {
            cout<<"Incorrect Binary format!"<<endl;
            exit(0);
        }
    }
}


void binary::ones_complement()
{
    chk_bin();
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
        
    }
}

void binary::display()
{
    cout<<"display your binary number: "<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}


int main()
{   
    binary b;
    b.read();
    b.display();
    b.ones_complement();
    b.display();
    return 0;
}