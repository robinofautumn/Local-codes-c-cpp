// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter parameter: ";
//     cin>>n;
//     cout<<endl;
//     for(int i=n;i>=1;i--)
//     {
//         for(int j=1;j<=i;j++)
//         cout<<j<<" ";
//         cout<<endl;

//     }

//     return 0;
// }

// ***********************************************

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter: ";
//     cin>>n;
//     cout<<endl;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=i;j++)
//         cout<<(i+j-1)%3<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

// *************************************************

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter: ";
//     cin>>n;
//     cout<<endl;
//     for(int i=1;i<=n;i++)
//     {
//         for(int k=n-1;k>=i;k--)
//         cout<<"  ";
//         for(int j=1;j<=n;j++)
//         cout<<"* ";
//         cout<<endl;
//     }

//     return 0;
// }

// ***************************************************************

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter : ";
//     cin>>n;
//     cout<<endl;
//     for(int i=1;i<=n;i++)
//     {
//         for(int k=n-1;k>=i;k--)
//         {
//             cout<<" ";
//         }
//         for (int j=1;j<=i;j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// *******************************************************************

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter : ";
//     cin>>n;
//     cout<<endl;
//     for (int i = 1; i <=n; i++)
//     {
//         for(int k=n-1;k>=i;k--)
//             cout<<"  ";
//         for(int j=i;j>=1;j--)
//             cout<<j<<" ";
//         for(int m=2;m<=i;m++)
//             cout<<m<<" ";
//         cout<<endl;
//     }
//     return 0;
// }

// **************************************************************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter: ";
//     cin >> n;
//     cout << endl;
//     for (int i = 1; i <= 2 * n; i++)
//     {
//         if (i <= n)
//         {
//             for (int k = i; k < n; k++)
//             {
//                 cout << "  ";
//             }
//         }
//         else
//         {
//             for (int k = 1; k < i - n; k++)
//             {
//                 cout << "  ";
//             }
//         }

//         if (i <= n)
//         {
//             for (int j = 1; j <= 2 * i - 1; j++)
//             {
//                 cout << "* ";
//             }
//         }
//         else
//         {
//             for (int j = 1; j <= 2 * (2 * n - i) + 1; j++)
//             {
//                 cout << "* ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// **************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter : ";
//     cin >> n;
//     cout << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int k = 1; k <= n - i; k++)
//             cout << " ";
//         for (int j = 1; j <= 2 * i - 1; j++)
//             cout << "*";
//         cout << endl;
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         for (int k = 1; k <= n - i; k++)
//             cout << " ";
//         for (int j = 1; j <= 2 * i - 1; j++)
//             cout << "*";
//         cout << endl;
//     }
//     return 0;
// }

// *****************************************************************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter: ";
//     cin >> n;
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= n ; j++)
//         {
//             if (i % 2 == 1)
//             {
//                 if ((i + j) % 4 == 0)
//                     cout << "* ";
//                 else
//                     cout << "  ";
//             }
//             else
//             {
//                 if ((i + j) % 2 == 0)
//                     cout << "* ";
//                 else
//                     cout << "  ";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }

// *******************************************************************************

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"enter: ";
//     cin>>n;
//     cout<<endl;
//     for(int i=1;i<=n;i++)
//     {
//         for(int k=1;k<=n-i;k++)
//         cout<<"  ";
//         for(int j=1;j<=2*i-1;j++)
//         {
//             if(j==1||j==2*i-1)
//                 cout<<"* ";
//             else
//                 cout<<"  ";
//         }
//         cout<<endl;
//     }
//     for(int i=n;i>=1;i--)
//     {
//         for(int k=1;k<=n-i;k++)
//         cout<<"  ";
//         for(int j=1;j<=2*i-1;j++)
//         {
//             if(j==1||j==2*i-1)
//                 cout<<"* ";
//             else
//                 cout<<"  ";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

// **********************************************************************************************

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter: ";
//     cin >> n;
//     cout << endl;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             if ((i + j) >= 2 + n && j <= n + i - 2)
//                 cout << "  ";
//             else
//                 cout << "* ";
//         }
//         cout << endl;
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= 2 * n - 1; j++)
//         {
//             if ((i + j) >= 2 + n && j <= n + i - 2)
//                 cout << "  ";
//             else
//                 cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }
