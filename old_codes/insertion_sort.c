#include<conio.h>
#include<stdio.h>
void insertion(int n)
{
    int a[10],i,j,t;
    
    for(i=0;i<n;i++)
    {
        printf("enter no. %d element:\t",i+1);
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        t=a[i];
        j=i-1;
        while(j>=0)
        {
            if(a[j]>t)
            {
                a[j+1]=a[j];
            }
            j--;
        }
        a[j+1]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{      
    insertion(10);
    getch();
}
