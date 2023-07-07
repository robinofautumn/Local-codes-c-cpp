#include<stdio.h>
#include<conio.h>
int main(){
    const int x = 10;
    int *ptrx = &x;
    *ptrx = 20;
    printf("%d",x);
    return 0;
}