#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int a[100],int n);
void display(int a[100],int n);
void rev_array(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,n);
    rev_array(a,n);
    display(a,n);
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
void rev_array(int a[100],int n)
{
    int i,j=n-1,t;
    for(i=0;i<j;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
}
void display(int a[100],int n)
{
     printf("the reversed array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
