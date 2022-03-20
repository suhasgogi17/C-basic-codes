#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int a[100],int n);
void bubble_sort(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,n);
    bubble_sort(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
    printf("enter no.s\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void bubble_sort(int a[100],int n)
{
    int i,j,t;
    for(j=0;j<n;j++)
    {
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
        }

    }
    }
      printf("the sorted array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
