// #include<iostream>
// using namespace std;

// int main(){
//     int a;
//     int *ptr = &a;
//     cout<<"The value of a: "<<*ptr<<endl;
//     cout<<"The value of ptr: "<<ptr<<endl;
//     cout<<"the value of ptr + 1: "<<ptr+1<<endl;
//     cout<<"The value of *(ptr+1): "<<*(ptr+1)<<endl;//koi garbage value milegi coz we haven't initialized the address "ptr+1".

//     return 0;
// }

// ********************************************************************************************************************************************

// #include<iostream>
// using namespace std;

// class Complex{
//     int real, imaginary;
//     public:
//         void getData(){
//             cout<<"The real part is "<< real<<endl;
//             cout<<"The imaginary part is "<< imaginary<<endl;
//         }

//         void setData(int a, int b){
//             real = a;
//             imaginary = b;
//         }

// };
// int main(){
//     // Complex c1;
//     // Complex *ptr = &c1;
//     Complex *ptr = new Complex;
//     // (*ptr).setData(1, 54); is exactly same as
//     ptr->setData(1, 54);

//     // (*ptr).getData(); is as good as
//     ptr->getData();

//     // Array of Objects
//     Complex *ptr1 = new Complex[4];
//     ptr1->setData(1, 4);
//     ptr1->getData();

//     (ptr1+1)->setData(22,55);
//     (ptr1+1)->getData();
//     return 0;
// }

// ********************************************************************************************************************************************

#include <iostream>
using namespace std;

class C
{
    int i;

public:
    int a;
    C() {}
    C(int x, int y)
    {
        a = x;
    }

    C(int j)
    {
        i = j;
    }

    int get_i()
    {
        return i;
    }
};

int main()
{
    C c1(8), *p1, *p2, ob(1, 2);
    int *p;
    C c2[4] = {1, 2, 3, 4};
    p1 = &c1;
    p2 = c2;
    p = &ob.a;
    cout << "The value of a: (p): " << *p << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << p2->get_i() << endl;
        p2++;
    }

    cout << "The value of i: " << c1.get_i() << endl;
    cout << "The value of i with the help of pointer (p->get_i()): " << p1->get_i() << endl;
    cout << "The value of i with the help of pointer ((*p1).get_i()): " << (*p1).get_i() << endl;
    return 0;
}