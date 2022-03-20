#include <stdio.h>
#include <stdlib.h>
void main()
{
    char name[50];
    int roll, i, num;
    FILE *fp;
    fp=fopen("2.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(0);
    }
    printf("enter number of student");
    scanf("%d",&num);
    for ( i = 0; i < num; i++)
    {
        printf("enter the name : ");
        scanf("%s",&name);
        printf("enter the roll : ");
        scanf("%d", &roll);
        fprintf(fp, "%s  %d\n",name , roll);
    }
    fclose(fp);
}