#include <stdio.h>
#include <stdlib.h>
void read_array(int a[100],int n);
void arrange(int a[100],int n);
int main()
{
   int a[100],n;
    printf("Value of n:\n");
    scanf("%d",&n);
    read_array(a,n);
    arrange(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
printf("enter ranks\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void arrange(int a[100],int n)
{
    int i,j,x;
      for(i=0;i<n;i++)
    {
          for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            x=a[i];
            a[i]=a[j];
            a[j]=x;
        }
    }
}
printf("the updated rank list  is\n");
for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("the highest rank is %d\n",a[0]);
    printf("the lowest rank is %d\n",a[n-1]);

}


