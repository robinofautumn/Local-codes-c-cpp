#include<iostream>
#include <bits/stdc++.h>

using namespace std;

struct Item
{
    int weight, value;

    Item(int value, int weight)

        :value(value), weight(weight){}   
};



bool cmp(Item a, Item b)
{
    double r1 = (double)a.value/a.weight;
    double r2 = (double)b.value/b.weight;
    return r1>r2;
}

double knapsack(Item arr[], int N, int size)
{
    //sorting items in descending order based on the profit-weight ratio.
    sort(arr, arr+size, cmp);

    int currwt = 0;
    double finalvalue=0;
    
    for(int i=0;i<size;i++)
    {
        //if adding an item won't overflow.
        if(currwt + arr[i].weight <= N)
        {
            currwt += arr[i].weight;
            finalvalue += arr[i].value;
        }

        else //adding an item would overflow.
        {
            double remain = (N-currwt);
            finalvalue +=(remain /arr[i].weight)*arr[i].value;
            break;
        }
    }
    return finalvalue;
}

int main(){
    int N = 60;//knapsack's max permissible weight.

    Item arr[]={
        {100, 10},
        {280, 40},
        {120, 20},
        {120, 24}
    };

    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"The max profit possible: "<<knapsack(arr, N, size);

    return 0;
}