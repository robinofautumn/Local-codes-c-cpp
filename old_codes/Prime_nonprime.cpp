// // Prime non prime

// // #include <iostream>
// // #include <cmath>
// // #include <bits/stdc++.h>
// // #include <chrono>
// // using namespace std;
// // void primeNonPrime(long n, bool f)
// // {
// //     for (long i = 2; i <= sqrt(n); i += 1)
// //     {
// //         if (n % i == 0 && n != 2)
// //         {
// //             f = 1;
// //             cout << "NON PRIME" << endl;
// //             break;
// //         }
// //     }
// //     if (f == 0)
// //         cout << "PRIME" << endl;
// // }

// // int main()
// // {
// //     long n;
// //     cout << "enter: ";
// //     cin >> n;
// //     bool f;
// //     auto start = chrono::high_resolution_clock::now();

// //     // unsync the I/O of C and C++.
// //     ios_base::sync_with_stdio(false);

// //     primeNonPrime(n, f);

// //     auto end = chrono::high_resolution_clock::now();

// //     // Calculating total time taken by the program.
// //     double time_taken =
// //         chrono::duration_cast<chrono::nanoseconds>(end - start).count();

// //     time_taken *= 1e-9;

// //     cout << "Time taken by program is : " << fixed
// //          << time_taken << setprecision(9);
// //     cout << " sec" << endl;
// //     return 0;
// // }

// // Reverse a no.

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n, i=0, arr[15]={0};
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<endl;
//     while(n>0)
//     {
//         if(i<15)
//         { 
//             arr[i]=n%10;
//             i++;
//             n/=10;
//         }
//         else{break;}
//     }
//     for(int j=0;j<i;j++)
//     {
//         cout<<arr[j];
//     }
//     return 0;
// }