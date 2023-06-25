#include <iostream>
using namespace std;

class Item
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }

    void getData(int i)
    {
        cout << "\n\nThe id of the item " << i + 1 << " is : " << id << endl
             << "The Price of the item " << i + 1 << " is: " << price << endl
             << "\n\n\n";
    }
};

int main()
{
    int i_d;
    float cost;
    int size = 4;
    Item *ptr = new Item[size];
    Item *temp = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id and price for item no. " << i + 1 << " : " << endl;
        cin >> i_d >> cost;
        ptr->setData(i_d, cost);
        ptr++;
    }
    for (int i = 0; i < size; i++)
    {
        temp->getData(i);
        temp++;
    }

    return 0;
}