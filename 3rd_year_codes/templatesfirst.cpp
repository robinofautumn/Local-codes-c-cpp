#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v2)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v2.arr[i];
        }
        return d;
    }
};

int main()
{

    vector<float> v1(3);
    v1.arr[0] = 2.98;
    v1.arr[1] = 12.34;
    v1.arr[2] = 4.12;

    vector<float> v2(3);
    v2.arr[0] = 32.44;
    v2.arr[1] = 3.7;
    v2.arr[2] = 12.1;

    float a = v1.dotProduct(v2);

    cout << a << endl;

    return 0;
}