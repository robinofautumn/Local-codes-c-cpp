#include<conio.h>
#include<stdio.h>
void main()
{
    int a[10],i,j,min,t;
    printf("Enter the elements in the array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        min=a[i];
        j=i;
        while(j<10)
        {
            if(min>a[j])
            {
                t = a[j];
                a[j]=min;
                min=t;
            }
            j++;
        }
        a[i]=min;
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
}