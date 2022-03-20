#include <stdio.h>
#include <stdlib.h>
void read_array(int a[100],int n);
void post_test(int a[100],int n);
int main()
{
   int a[100],n;
    printf("enter no. of students:\n");
    scanf("%d",&n);
    read_array(a,n);
    post_test(a,n);
    return 0;
}
void read_array(int a[100],int n)
{   int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void post_test(int a[100],int n)
{

    int i,ten=0,even=0,odd=0;
     for(i=0;i<n;i++)
    {

        if(a[i]%2==0)
        {
            even++;
        }
         if(a[i]%2!=0)
        {
            odd++;
        }

        if(a[i]==10)
        {
            printf("congratulations student no. %d scored full marks\n",i+1);
            ten++;
        }
    }
      printf("no. of students scored even marks =%d\n ",even);
       printf("no. of students scored odd marks = %d\n",odd);
        printf("no. of students scored full marks = %d\n ",ten);
}
