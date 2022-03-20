#include <stdio.h>
#include <stdlib.h>
void read_array(int [], int);
void check(int [], int);
int main()
{
  int n;
  printf("enter number of elements : \n");
  scanf("%d", &n);
  int a[n];
  read_array(a,n);
  check(a,n);
  return 0;
}
void read_array(int a[], int n)
{
  int i;
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
}
void check(int a[], int n)
{
   int che=0,i,k;
   printf("enter the required number :\n");
   scanf("%d", &k);
   for ( i = 0; i < n; i++)
   {
     if(k==a[i])
     {
       che=1;
       printf("the number %d is found at %d", a[i], i+1);
     }
   }
   if (che==0){
       printf("no match");
     }
   
}