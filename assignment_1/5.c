#include <stdio.h>
#include <stdlib.h>
void read_array(int a[100],int n);
void pen(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:");
    scanf("%d",&n);
    read_array(a,n);
    pen(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void pen(int a[100],int n)
{
    float av=0,sum=0;
    int i,max=a[0],min=a[0];
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
    }
     av =  sum/n;
      printf("avg penalty paid by student %f\n ",av*2);
       printf("max penalty %d\n min penalty %d\n",max*2,min*2);
            printf("total penalty paid by student %f\n ",sum*2);
}
