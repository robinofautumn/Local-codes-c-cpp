//code example (1) ------------->

// #include<iostream>
// using namespace std;

// int main()
// {
//     int a = 5;
//     int *b = &a;
//     int **c = &b;
//     cout<<"a = "<<a<<endl;
//     cout<<"b = "<<b<<endl;
//     cout<<"*b = "<<*b<<endl;
//     cout<<"&b = "<<&b<<endl;
//     cout<<"c = "<<c<<endl;
//     cout<<"*c = "<<*c<<endl;
//     cout<<"**c = "<<**c<<endl;
//     return 0;
// }

//****************************************************************************************************************************************

//pointers and arrays
//code example (2)----------------->
// #include<iostream>
// using namespace std;

// int main()
// {
//     int marks[]={23,45,56,89};
//     int*p = marks;   
//     int n = sizeof(marks)/sizeof(marks[0]);

//     for(int i = 0;i<n;i++)
//     {
//         cout<<"value of marks["<<i<<"] = "<<*(p+i)<<endl;
//     }
    
//     return 0;
// }



//****************************************************************************************************************************************



//array to pointer 
//code example (3)----------------------->
// #include<iostream>
// using namespace std;

// int main()
// {
//     int v[]={10,100,200};
//     int *p = v;
//     int *ptr;
//     for(int i =0;i<3;i++)
//     {
//         cout<<"*p = "<<*p<<endl;
//         cout<<"p = "<<p<<endl;
//         p++;
//     }
  
//     //method two to display the elements of array v---->
//     ptr = v;
//     cout<<"\n\nthe values of the array is:"<<endl;
//     cout<<ptr[0]<<endl<<ptr[1]<<endl<<ptr[2]<<endl;
    

//     return 0;
// }



//****************************************************************************************************************************************




//pointers to multidimensional arrays----------->
#include<iostream>
using namespace std;

int main(){
    int nums[2][3] = {{1,2,3}, {4,5,6}};
    
    // cout<<"*(*(nums)) = nums[0][0] = "<<*(*(nums))<<endl;
    // cout<<"*(*(nums)+1) = nums[0][1] = "<<*(*(nums)+1)<<endl;
    // cout<<"*(*(nums+1)) = nums[1][0] = "<<*(*(nums+1))<<endl;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"*(*(nums+"<<i<<")+"<<j<<") = "<<*(*(nums+i)+j)<<endl;
        }
    }

    return 0;
}


