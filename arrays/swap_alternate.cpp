
// swap alternate elements of an array using ITERATION

#include<iostream>
using namespace std;
void print(int *a, int n)
{
    for(int i=0; i<n;i++) cout<<a[i]<<" ";
}

void swap(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

int main(){
    int arr[] = {1,2,4,55,23,5,21};
    int size = sizeof(arr)/ sizeof(arr[0]);

    cout<<"the actual array: "<<endl;
    print(arr, size);

    for(int i=0;i<size-1;i+=2)
    {
        swap(&arr[i],&arr[i+1]);
    }
    cout<<"\nthe reversed array: "<<endl;
    print(arr, size);

    return 0;
}