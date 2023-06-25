#include<iostream>
using namespace std;

typedef struct employee{
    int eid;
    char favchar;
    float salary;
}ep;

int main()
{
    ep raj, shyam;
    struct employee shiv;
    raj.eid = 1;
    raj.favchar = 'R';
    raj.salary = 45000.0;

    shyam.eid = 2;
    shyam.favchar = 'S';
    shyam.salary = 60000.0;

    shiv.eid = 3;
    shiv.favchar = 's';
    shiv.salary = 56000.0;

    cout<<"id of raj = "<<raj.eid<<endl;
    cout<<"favchar of raj = "<<raj.favchar<<endl;
    cout<<"salary of raj = "<<raj.salary<<endl;

    cout<<"id of shyam = "<<shyam.eid<<endl;
    cout<<"favchar of shyam = "<<shyam.favchar<<endl;

    cout<<"salary of shiv = "<<shiv.salary<<endl;

    return 0;
}