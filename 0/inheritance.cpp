#include <iostream>
using namespace std;
class base
{
    int i, j;

public:
    // base() {}
    void set_data(int a, int b)
    {
        i = a;
        j = b;
    }
    void show_data()
    {
        cout << "value of i = " << i << endl
             << "value of j = " << j << endl;
    }
};

class derived : base
{
    int k;

public:
    derived() {}
    void set_data_2(int a, int val1, int val2)
    {
        // int val1, val2;
        k = a;
        set_data(val1, val2);
    }
    void show_data_2()
    {
        show_data();
        cout << "value of k = " << k << endl;
    }
};

int main()
{
    // cout << "creating object 'd1'" << endl;
    derived d1;
    // cout << "setting the value of k(private to derived class)\n";
    d1.set_data_2(1, 2, 3);
    d1.show_data_2();
    // cout << "setting the values of i,j(private to base class)\n";
    //d1.set_data(2, 3); ---> accessible only when base class is publically inherited
    // d1.show_data();---> accessible only when base class is publically inherited

    return 0;
}