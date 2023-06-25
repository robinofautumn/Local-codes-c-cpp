#include<conio.h>
void insertion(int a[], int n)
{
    int i, temp, j;
    for(i=1;i<n;i++)
    {
        temp = a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
void main()
{
    int a[100], i, num;
    printf("Enter the number of elements : ");
    scanf("%d",&num);
    printf("Enter the array elements: ");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion(a,num);
    return 0;
}