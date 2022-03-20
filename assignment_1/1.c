
#include <stdio.h>
#include <stdlib.h>
void read_array(int *a[100] ,int *n);
void count(int *a[100],int *n);
int main()
{
   int n;
 
    printf("Value of n:");
    scanf("%d",&n);
     int a[100];
     int *fa, *pn;
     fa=&a[100];
     pn=&n;
    read_array(a,n);
    count(a,n);
    return 0;
}
void read_array(int *a[100],int *n)
{   int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&*a[i]);
    }
}
void count(int *a[100],int *n)
{
    int i,posi=0,nega=0; 
    for(i=0;i<*n;i++)
    {
        if(a[i]>0)
        {
            posi++;
        }
        if(a[i]<0)
        {
            nega++;
        }
    }
    printf("positive count=%d\nnegative count=%d\n",posi,nega);
}
