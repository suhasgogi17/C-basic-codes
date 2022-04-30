#include <stdio.h>
#include <stdlib.h>

void merge(int ar[],int le, int m, int a)
{
   int n1=m;
   int n2=a-m;
   int l[n1],r[n2];
   for (int i = 0; i < n1; i++)
   {
       l[i]=ar[i];
   }
   for (int i = 0; i < n2; i++)
   {
       r[i]=ar[m+i];
   }
   int i=0,j=0,k=0;
   /*for ( i = 0; i < n1; i++)
   {
       printf("%d\t",l[i]);
   }
   printf("\n");
   for ( i = 0; i < n2; i++)
   {
       printf("%d\t",r[i]);
   }*/
   while (i<n1 && j<n2)
   {
       if (l[i]<r[j])
       {
           ar[k]=l[i];
           i++;
       }
       else if (r[j]<l[i])
       {
           ar[k]=r[j];
           j++;
       }
       k++;
   }
   while (i < n1)
    {
        ar[k] = l[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        ar[k] = r[j];
        j++;
        k++;
    }
   
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}
int main()
{
    int n;
    printf("enter the number of elements ");
    scanf("%d",&n);
    int ar[n];
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&ar[i]);
    }
    mergeSort(ar,0,n);
    for (int i = 0; i < n; i++)
   {
       printf("%d",ar[i]);
   }
}