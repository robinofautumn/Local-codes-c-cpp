#include <iostream>
#include <string>
using namespace std;

class binary
{ /* by default the members of a class are private, 
    so even if we don't mention the 'private' keyword it's fine... */
    //private:
    string s;
    void chk_binary(); // our driver code will not be able to call this function (coz this is a private function) 
                       //so we will implement nested function's concept.

public:
    void read();
    void ones_comp();
    void disp();
};

void binary ::read()
{
    cout << "Enter the value of Binary number: ";
    cin >> s;
    chk_binary(); // Implementation of nested function(i.e. calling one function into another function...)
}

void binary ::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << s << " is not binary because of incorrect binary format!!" << endl;
            exit(0);
        }        
    }
    
    cout<<"Correct binary format!!"<<endl;
    cout<<"<---no. befor ones complement--->"<<endl;
    disp();
    ones_comp();

}

void binary :: ones_comp()
{
    for (int i = 0; i <s.length(); i++)
    {
        if(s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
        
    }
    cout<<"<---no. after ones complement--->"<<endl;
    disp();
    
}

void binary :: disp()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    return 0;
}