#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    public:
    void setData()
    {
        cout<<"Enter the id: "<<endl;
        cin>>id;
        count++;
    }

    void getData()
    {
        cout<<"The id of the employee is "<<id<<" and this is employee number "<<count+1<<endl;
    }

    static void getCount()
    {
        cout<<"The value of count is "<<count<<endl;
    }

}shiv, rana, love;

int Employee::count;

int main()
{   
    shiv.setData();
    shiv.getData();
    Employee::getCount();

    rana.setData();
    rana.getData();
    Employee::getCount();

    love.setData();
    love.getData();
    Employee::getCount();   

    return 0;
}