#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j,n;
    int a[100],b[100];
    printf("enter number of elements in array");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = n; i > 0; i--)
    {
        printf("%d\n",a[i]);
    }
    

    
    
}