#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int a[100],int n);
void  equi(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,n);
    equi(a,n);
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
void  equi(int a[100],int n)
{
     int i,flag=0;
    for(i=1;i<n-1;i++)
    {
       int hsum=0,tsum=0,rem=0,x,y;
      for(x=0;x<i;x++)
       {
          hsum=hsum+a[x];
       }
       for(y=i+1;y<n;y++)
       {
          tsum=tsum+a[y];
       }

       if(hsum==tsum)
       {
      printf("the equilibrium position = %d \n",is);
       flag=1;
      break;

       }
    }
    if(flag==0)
    {
         printf("there is no equilibrium position.\n");
    }
}
