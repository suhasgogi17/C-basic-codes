#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20],b[20];
    int i,n;
    printf("enter number of students\n");
    scanf("%d",&n);
    if(n<0||n>20)
    {
        printf("Invalid Input");
    }
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        printf("\n");
    }
    int st=0,nd=0,q=0,w=0;
    int j=0;
    for ( i = 0; i < n; i++)
    {
        if (a[i]<5)
        {
            b[j]=i+1;
            j++;
        }
        
        else if (a[i]>w)
        {
            nd=st;
            st=i+1;
            q=w;
            w=a[i];
        }
        else if (a[i]>q&&a[i]<w)
        {
            nd=i+1;
            q=a[i];
        }
        
    }
    printf("highest = %d\n",st);
    printf("second = %d\n", nd);
    printf("notied\n");
    for ( i = 0; i < j; i++)
    {
        printf("%d\t",b[i]);
    }
    float avg,sum=0;
    for ( i = 0; i < n; i++)
    {
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("\navg = %.2f",avg);

}