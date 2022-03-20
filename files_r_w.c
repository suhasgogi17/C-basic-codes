#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp= fopen("1.txt","w");
    if (fp==NULL)
    {
        printf("error in opening the file");
        exit(0);
    }
    printf("input some text");
    while ((ch=getchar())!=EOF)
    {
        fputc(ch,fp);
    }
    fclose(fp);
    printf("the file contains ");
    fp =fopen("1.txt","r");
    while ((ch=fgetc(fp)) !=EOF)
    {
        putchar(ch);
    }
    fclose(fp);
    
}