#include<stdio.h>
#include <stdlib.h>

void read_array(int a[100],int n);
void prime(int a[100],int n);
int main()
{
   int a[100],n;
    printf("enter n:\n");
    scanf("%d",&n);
    read_array(a,n);
    prime(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
printf("Enter the number to check prime:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void prime(int a[100],int n)
{
int i,flag,j;
 for(i=0;i<n;i++)
    {
       flag=0;
       for(j=2;j<=a[i]/2;j++)
{
if(a[i]%j==0)
{
printf("%d is not prime\n",a[i]);
flag=1;
break;
}
}
if(flag==0)
{
    printf("%d is prime\n",a[i]);
}

    }
 }
