// swap alternate elements of array using RECURSION

#include <iostream>
using namespace std;

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swapAlter(int *a, int n)
{
    static int i;
    if (i >= n - 1)
        return;
    else
    {
        swap(&a[i], &a[i + 1]);
        i += 2;
        swapAlter(a, n);
    }
}

int main()
{

    int a[] = {7, 4, 5, 6, 21, 2, 9};
    int size = sizeof(a) / sizeof(a[0]);
    cout << "normal array--> ";
    print(a, size);
    cout << endl;
    swapAlter(a, size);
    cout << "updated array--> ";
    print(a, size);
    cout << endl;
    return 0;
}