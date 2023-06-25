
// reverse array using recursion
#include<iostream>
using namespace std;

void swap (int *e1, int *e2)
{
  int temp;
  temp = *e1;
  *e1 = *e2;
  *e2 = temp;
}

void reverseArray (int *a, int size)
{
  static int start = 0;
  static int end = size-1;
  swap(a[start], a[end]);
  
  if(start<end)
  {     
      start++;end--;
      return reverseArray(a, size);
  }
  else return;
}

void print(int *a, int n)
{
    for (int i = 0; i < n; i++)
    cout << a[i] << " ";
    cout<<endl;
}

int main ()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = sizeof (arr) / sizeof (arr[0]);
    cout<<"given array--> ";
    print(arr, n);
    reverseArray(arr, n);
    cout<<"reversed array--> ";
    print(arr, n);
    return 0;
}

