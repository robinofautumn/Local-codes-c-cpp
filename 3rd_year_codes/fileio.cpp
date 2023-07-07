#include<iostream>
#include<fstream>
// #include<string>
using namespace std;

int main()
{   
    ofstream out("samplecpp.txt");
    string st;
    cout<<"Enter the name of your frined : "<<endl;
    cin>>st;
    out<<st<<" is my friend's name!!"<<endl;
    out.close();
    return 0;
}