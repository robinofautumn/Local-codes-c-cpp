#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << endl;
    }
    cout<<"***********************"<<endl;
}

int main()
{
    list<int> list1;
    list<int> list2;
    int ele;
    list1.push_back(12);
    list1.push_back(2);
    list1.push_back(34);
    list1.push_back(56);
    list1.push_back(1);
    list1.push_back(22);
    display(list1);
    list2.push_back(32);
    list2.push_back(2);
    list2.push_back(11);
    list2.push_back(1);
    list2.push_back(5);
    list2.push_back(15);
    display(list2);
    list1.merge(list2);//list1 is merged with list2
    
    list1.sort();
    cout<<"after merging and sorting the list"<<endl;
    display(list1);

    // display(list1);

    return 0;
}