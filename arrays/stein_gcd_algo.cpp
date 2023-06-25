// IT IS USED FOR COMPUTING GCD THROUGH BINARY FORMAT...

// RECURSIVE APPROACH...

// #include<iostream>
// using namespace std;

// int gcd(int a, int b)
// {
//     if(a==0)
//         return b;
//     else if(b==0)
//         return a;
    
//     if(~a&1)
//     {
//         if(b&1)
//             return gcd(a>>1,b);
//         else 
//             return gcd(a>>1,b>>1)<<1;
//     }
//     else if(~b&1)
//         return gcd(a,b>>1);
//     if(a>b)
//         return gcd((a-b)>>1,b);
//     else if(b>a)
//         return gcd((b-a)>>1,a);
// }


// int main()
// {
//     int g = gcd(36,60);
//     cout<<g;
//     return 0;
// }





// BINARY GCD THROUGH ITERATION...

#include<iostream>
using namespace std;

// int gcd(int a, int b)
// {
//     if(a==0)
//         return b;
//     else if(b==0)
//         return a;
//     int k = 0;
//     for(k=0;((a|b)&&1)==0;k++)
//     {
//         cout<<"i am here 1";
//         a>>1;
//         b>>1;
//     } 
//     while(a&1==0)
//         {cout<<"i am here 2";
//         a>>1;}
//     do{
//         cout<<"i am here 3";
//         while(b&1==0)
//             return b>>1;
//         if(a>b)
//             swap(a,b);
//         b-=a;
//     }while(b!=0);
//     return a<<k;
// }
unsigned int gcd(unsigned int u, unsigned int v)
{
    unsigned int shift = 0;

    /* GCD(0,v) == v; GCD(u,0) == u, GCD(0,0) == 0 */
    if (u == 0) return v;
    if (v == 0) return u;
 
    /* Let shift := lg K, where K is the greatest power of 2
        dividing both u and v. */
    while (((u | v) & 1) == 0) {
        shift++;
        u >>= 1;
        v >>= 1;
    }
 
    while ((u & 1) == 0)
        u >>= 1;
 
    /* From here on, u is always odd. */
    do {
        /* remove all factors of 2 in v -- they are not common */
        /*   note: v is not zero, so while will terminate */
        while ((v & 1) == 0)
            v >>= 1;

        /* Now u and v are both odd. Swap if necessary so u <= v,
            then set v = v - u (which is even). For bignums, the
             swapping is just pointer movement, and the subtraction
              can be done in-place. */
        if (u > v) {
            unsigned int t = v; v = u; u = t; // Swap u and v.
        }
       
        v -= u; // Here v >= u.
    } while (v != 0);

    /* restore common factors of 2 */
    return u << shift;
}
int main()
{
    int g = gcd(36,60);
    cout<<g;
    return 0;
}


































