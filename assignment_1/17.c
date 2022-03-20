#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int a[100],int d[100],int n);
void display(int a[100],int d[100],int n);
int main()
{
   int a[100],d[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,d,n);
    display(a,d,n);
    return 0;
}
void read_array(int a[100],int d[100],int n)
{   int i;
    printf("enter  array 1 \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter array 2 \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
}
void display(int a[100],int d[100],int n)
{
     printf("after exchange \n array 1 is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",d[i]);
    }

     printf("\n after exchange \n array 2 is \n");
       for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
