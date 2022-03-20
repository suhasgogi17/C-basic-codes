#include <stdio.h>
#include <stdlib.h>
int read_array(int a[100],int n);
void avg(int a[100],int n,int);
int main()
{

   int a[100],sum=0;
   int n=10;//given.
    sum = read_array(a,n);
    printf("%d\n",sum);
    avg(a,n,sum);
    return 0;
}
int read_array(int a[100],int n)
{   int i,sum=0;
printf("enter the +ve score of each students\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
        if(a[i]<0)
        {
            printf("invalid input\n");
            exit(0);
        }
        sum=sum+a[i];
    }
    return sum;
}
void avg(int a[100],int n,int sum)
{
    int i,abv_avg=0;
    float av =0;
    av =  sum/10.0;
    printf("average=%f\n",av);
     for(i=0;i<n;i++)
    {
       if(a[i]>=av)
       {
           abv_avg++;
       }
    }
 printf("the no. of students above average %d\n the no. of students below average %d\n",abv_avg,n-abv_avg);

}
