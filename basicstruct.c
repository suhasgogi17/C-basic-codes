#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[40];
};
void read(struct emp a[], int );
int main()
{
    struct emp a[100];
    int n;
    printf("enter number of emp : ");
    scanf("%d", &n);
    read(a, n);
    return 0;
}
void read(struct emp a[], int n )
{
   int i;
   printf("enter the id and name\n");
   for ( i = 0; i < n; i++)
   {
       scanf("%d  %s", &a[i].id, &a[i].name);
   }
   for ( i = 0; i < n; i++)
   {
       printf("%d  %s", a[i].id, a[i].name);
   }
}