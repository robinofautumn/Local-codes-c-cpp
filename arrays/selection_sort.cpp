#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(int);
    for(int i=0; i<n; i++)
    {
        int min = arr[i];
        int key=i;
        for(int j = i; j<n; j++)
        {
            if(min>arr[j])
            {
                min = arr[j];
                key = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[key];
        arr[key] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] <<" ";
    return 0;
}