// sort the array containing only 0,1 and 2 elements without any sorting algorithm...
//Time comp = O(n), Space comp = O(1);

#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a[20],n, i, lo, m, hi;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the values in the array(0/1/2 only!!): "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0||a[i]==1||a[i]==2)
        {
            continue;
        }
        else
        {
            cout<<"No other integers allowed!!"<<endl;
            exit;
            break;
        }
    }
    lo = 0;
    hi = n-1;
    m = lo;


    while(m<=hi)
    {
        switch(a[m])
        {

            case 0:
            {
                swap(&a[lo], &a[m]);
                lo++;
                m++;
                break;
            }
            
            case 1:
            {
                m++;
                break;
            }
            
            case 2:
            {
                swap(&a[hi], &a[m]);
                hi--;
                break;
            }
        }
    }
    cout<<"\nThe sorted array containing only 0/1/2 is..."<<endl;
    for(int j=0;j<n;j++)
    {
        cout<<a[j]<<endl;
    }
    return 0;
}