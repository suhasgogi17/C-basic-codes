#include <stdio.h>
#include <stdlib.h>
void read(int [], int);
void salary(int [], int);
int main()
{
    int n;
    printf("enter number of people:");
    scanf("%d", &n);
    int a[n];
    read(a,n);
    salary(a,n);
}
void read(int a[], int n){
    int i;
    for ( i = 0; i <n; i++)
    {
        printf("enter the Experience of %d : ", i+1);
        scanf("%d",&a[i]);
    }
    
}
void salary(int a[], int n)
{
   int i;
   for ( i = 0; i <n; i++)
   {
       if(a[i]>=5&&a[i]<8){
          printf("the salary of %d is %d\n", i+1, 10600+1060);
       }
       else if(a[i]>=8&&a[i]<11){
          printf("the salary of %d is %d\n", i+1, 21300+(2130*2));
       }
       else if(a[i]>=11){
          printf("the salary of %d is %d\n", i+1, 32100+(3210*3));
       }
       else{
           printf("not eligible\n");
       }
   }
   
}