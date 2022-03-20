#include <stdio.h>
#include <stdlib.h>
void read_array(int a[100],int n);
void money_spent(int a[100],int n);
int main()
{
   int a[100],n=12;//for 12 months.
    read_array(a,n);
    money_spent(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
printf("enter 1 year monthly expenditure\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void money_spent(int a[100],int n)
{
    float av=0,sum=0;
    int i,cou=0,max=a[0],min=a[0];
     for(i=0;i<n;i++)
    {
       sum=sum+a[i];
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<min)
        {
            min=a[i];
        }
          if(a[i]>=35000)
        {
            cou++;
        }
    }
     av =  sum/n;
     printf("month of max expenditure %d\n ",max);
           printf("month of min expenditure %d\n ",min);
           printf("month of expenditure more than 35k %d\n ",cou);
            printf("avg expenditure %f\n ",av);
}
