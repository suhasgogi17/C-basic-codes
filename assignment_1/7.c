#include <stdio.h>
#include <stdlib.h>
void read_array(int a[100],int n);
void tax(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,n);
    tax(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void tax(int a[100],int n)
{
    float av=0,sum=0;
    int  i,c1=0;//count above 2.5lakhs
        int c2=0;//count above 50k and 1.5lakhs.
        for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(a[i]>=250000)
        {
       c1++;
        }
        if(a[i]>50000&&a[i]<=150000)
        {
       c2++;
        }
    }
    av=sum/n;
    printf("the total no. of tax payers paid tax above 2.5lkh = %d\n",c1);
    printf("the total no. of tax payers paid tax between 50k and 1.5lkh = %d\n",c2);
    printf("average tax collected is %f",av);
    }
