// RECURSIVE APPROACH...
// #include<iostream>
// using namespace std;
// int gcd(int a, int b)
// {
//     if(a==0)
//         return b;
//     else if(b==0)
//         return a;
//     else
//         return gcd(b,a%b);  
// }

// int main()
// {
//     int g=gcd(36,60);
//     cout<<g;
//     return 0;
// }



// USING TERNARY OPERATOR VIA RECURSION...
// #include<iostream>
// using namespace std;
// int gcd(int a , int b)
// {
//     return b?gcd(b,a%b):a;
// }

// int main()
// {
//     int g = gcd(60,36);
//     cout<<g;
//     return 0;
// }




// ITERATIVE APPROACH...
// #include<iostream>
// using namespace std;

// int gcd(int a, int b)
// {
//     while(b)
//     {
//         a%=b;
//         swap(a,b);
//     }
//     return a;
// }

// int main()
// {
//     int g = gcd(60,36);
//     cout<<g;
//     return 0;
// }






























































