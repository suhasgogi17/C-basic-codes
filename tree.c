#include <stdio.h>
#include <stdlib.h>

typedef struct dll
{
    int n;
    struct dll *lt;
    struct dll *rt;
}  *node;

node getnode ()
 {
     node new1;
     new1=(node) malloc(sizeof (struct dll));
     printf("enter n\n");
     scanf("%d",&new1->n);
     new1->lt=NULL;
     new1->rt=NULL;
     
     return new1;
 }

 node insert_next(node head)
 {
     node cur=head;
     node new1=getnode();
     if(head==NULL)
     return new1;
     while(1)
     {
         if(head->n < new1->n)
         {
         if (cur->n > new1->n && cur->lt==NULL)
         {
             cur->lt=new1;
         }
         else if (cur->n < new1->n && cur->rt==NULL)
         {
             cur->rt=new1;
         }
         }
         
     }
     cur->next=new1;
     new1->next=NULL;
     return head;
 }