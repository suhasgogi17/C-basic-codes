#include <stdio.h>
#include <stdlib.h>
void read_array(float a[100],int n);
void flat(float a[100],int n);
int main()
{
  float a[100];
   int n;
    printf("enter no. of flats:\n");
    scanf("%d",&n);
    read_array(a,n);
    flat(a,n);
    return 0;
}
void read_array(float a[100],int n)
{   int i;
printf("enter units consumed:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",(a+i));
    }
}
void flat(float a[100],int n)
{
    int i;
        for(i=0;i<n;i++)
    {
       if(a[i]>0&&a[i]<=100)
       {
           printf("charges applied for flat %d = %f\n",i+1,(*(a+i)*1.5));
       }
          if(a[i]>100&&a[i]<=250)
       {
           printf("charges applied for flat %d = %f\n",i+1,((*(a+i)-100)*2.3)+(100*1.5));
       }
          if(a[i]>250&&a[i]<=600)
       {
           printf("charges applied for flat %d = %f\n",i+1,((*(a+i)-250)*4)+(150*2.3)+(100*1.5));
       }
          if(a[i]>600)
       {
           printf("charges applied for flat %d = %f\n",i+1,((*(a+i)-600)*5.5)+(350*4)+(150*2.3)+(100*1.5));
       }
    }

}
