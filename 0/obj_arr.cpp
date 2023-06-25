#include<iostream>
using namespace std;

class Employee
{

private:
    int id;
    int salary;
    
public:
    void setId();
    void getId();

};

void Employee::setId()
{
    salary = 122;
    cout<<"Enter the id of Employee: "<<endl;
    cin>>id;
}

void Employee::getId()
{
    cout<<"The Id of this Employee is: "<<id<<endl;
}

int main()
{
    Employee fb[4];

    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
       
    return 0;
}