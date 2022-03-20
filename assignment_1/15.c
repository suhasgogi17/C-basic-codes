#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void read_array(int a[100],int d[100],int n);
void platform(int a[100],int d[100],int n);
int main()
{
   int a[100],d[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,d,n);
    platform(a,d,n);
    return 0;
}
void read_array(int a[100],int d[100],int n)
{   int i;
    printf("enter  arriving time \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter departure time \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
}

void platform(int a[100],int d[100],int n)
{
     int i=0,j=0,plf=1,end=1;
    for(i=0;i<n;i++)
    {
       int plf=1;
      for(j=i+1;j<n;j++)
       {
           if((a[i]>=a[j]&&a[i]<=d[j]||a[j]>=a[i]&&a[j]<=d[i]))
           {
              plf++;
           }
       }
       if(plf>end)
       {
           end=plf;
       }
    }
        printf("minimum number of platforms needed = %d\n",end);
}
