#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int a[100],int n);
void display(int a[100],int n);
void  max_sum(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,n);
    display(a,n);
    max_sum(a,n);
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
void display(int a[100],int n)
{
 printf("the array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }

}

void  max_sum(int a[100],int n)
{
     int sum=0,i;
    for(i=0;i<n;i++)
    {
       int max=0;
      for(;a[i]!=0;a[i] = a[i]/10)
       {
           if((a[i]%10)>max)
           {
               max=a[i]%10;
           }
       }
       sum=sum+max;
    }
        printf("maximum number's sum = %d\n",sum);
}
