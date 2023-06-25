#include <iostream>
using namespace std;

class C2;

class C1
{
private:
    int data1;

public:
    friend void swap(C1 &, C2 &);
    void setData(int val1)
    {
        data1 = val1;
    }
    void display()
    {
        cout << "The value of data1: " << data1 << endl;
    }
};

class C2
{
    int data2;

public:
    friend void swap(C1 &, C2 &);
    void setData(int val2)
    {
        data2 = val2;
    }
    void display()
    {
        cout << "The value of data2: " << data2 << endl;
    }
};

void swap(C1 &x, C2 &y)
{
    int temp;
    temp = x.data1;
    x.data1 = y.data2;
    y.data2 = temp;
}

int main()
{
    C1 o1;
    C2 o2;

    o1.setData(3);
    cout << "Pre swapping"
         << "\n";
    o1.display();

    o2.setData(4);
    o2.display();

    swap(o1, o2);

    cout << "Post swapping " << endl;
    o1.display();
    o2.display();

    return 0;
}