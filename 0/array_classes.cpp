#include<iostream>
using namespace std;

class shop
{
int itemId[100];
int itemPrice[100];
int counter;
public:
void initcounter()
{ counter = 0;}
void setprice();
void displayprice();
};

void shop::setprice()
{
    cout<<"Enter the id of your item no:"<<counter+1<<endl;
    cin>>itemId[counter];

    cout<<"Enter the price of your item "<<endl;
    cin>>itemPrice[counter];

    counter++;
}

void shop::displayprice()
{
    for(int i=0;i<counter;i++)
    {
        cout<<"price of the item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    shop dukaan1;
    dukaan1.initcounter();
    dukaan1.setprice();
    dukaan1.setprice();
    dukaan1.setprice();
    dukaan1.displayprice();
    return 0;
}