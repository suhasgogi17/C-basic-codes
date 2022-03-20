#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int a[100],int n);
void  perfect(int a[100],int n);
int main()
{
   int n;
    printf("Value of n:\n");
    scanf("%d",&n);
    int a[n];
    read_array(a,n);
    perfect(a,n);
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
void  perfect(int a[100],int n)
{
     int i;
    for(i=0;i<n;i++)
    {
       int num=1,sum=0,rem=0;
      for(num=1;num<=a[i]/2;num++)
       {
           rem=a[i]%num;
           if(rem==0)
           {
               sum=sum+num;
               //printf("%d\n", num);
           }
           //printf("%d\n", sum);
       }
       if(sum==a[i])
       {
      printf("the number %d is perfect\n",a[i]);
       }
       else
        printf("the number %d is not perfect\n",a[i]);

    }

}
