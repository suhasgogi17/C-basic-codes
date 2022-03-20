#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct emp
{
    int id;
    char name[40];
};
void read(struct emp*, int );
void display(struct emp*, int );
int main()
{
    struct emp *a;
    FILE *fp;
    int n;
    a= (struct emp*) malloc(n*sizeof(struct emp));
    printf("enter number of emp : ");
    scanf("%d", &n);
    /*fp=fopen("emp.txt","w");
    if (fp==NULL)
    {
        printf("error in opening the file");
        exit(0);
    }
    while ((ch=getchar())!=EOF)
    {
        fputc(ch,fp);
    }*/
    read(a, n);
    display(a,n);
    return 0;
}
void read(struct emp *a, int n )
{
   int i;
   printf("enter the id and name\n");
   for ( i = 0; i < n; i++)
   {
       scanf("%d", &(a+i)->id);
       scanf("%s",(a+i)->name);
   }
}
void display(struct emp *a, int n )
{
   int i;
   for ( i = 0; i < n; i++)
   {
       printf("%d  %s\n", (a+i)->id, (a+i)->name);
   }
}