#include <stdio.h>
#include <stdlib.h>

typedef struct sll
{
    int n;
    struct sll *next;
    struct sll *dow;
}  *node;

node getnode ()
 {
     node new1;
     new1=(node) malloc(sizeof (struct sll));
     new1->next=NULL;
     new1->dow=NULL;
     
     return new1;
 }

 node insert_next(node head)
 {
     node cur=head;
     node new1=getnode();
     printf("enter n\n");
     scanf("%d",&new1->n);
     if(head==NULL)
     return new1;
     while(cur->next!=NULL)
     {
         cur=cur->next;
     }
     cur->next=new1;
     new1->next=NULL;
     return head;
 }
 node insert_dow(node head)
 {
     node cur=head;
     while(cur->next!=NULL)
        cur=cur->next;
        while(cur->dow!=NULL)
            cur=cur->dow;
     node new1=getnode();
     printf("enter n\n");
     scanf("%d",&new1->n);
     cur->dow=new1;
     return head;
 }

 node display(node head)
{
    node cur=head;
    if(head==NULL)
    printf("list is empty\n");
    else
    {
        printf("your data in the list is:\n");
        while(cur!=NULL)
        {
            printf("%d--",cur->n);
            node b=cur;
            b=b->dow;
            while(b!=NULL)
            {
             printf("%d--",b->n);
             b=b->dow;
            }
            
            printf("\n");
            cur=cur->next;
        }
    }
}

void sort(node head)
{
    node newn= getnode();
    newn->next=NULL;
    node ncur=newn;
    node cur= head;
    node cur2;
    //This nested while loops are to MERGE the sll
    while (cur!=NULL)
    {
        cur2=cur;
        while (cur2!=NULL)
        {
            node new= getnode();
            new->next=NULL;
            ncur->n=cur2->n;
            ncur->next=new;
            ncur=ncur->next;
            cur2=cur2->dow;
        }
        cur=cur->next;
    }
    cur=newn;
    node cur3;
    int temp;
    //This nested while loops are to SORT the sll
    while (cur!=NULL)
    {
        cur3=cur->next;
        while (cur3!=NULL)
        {
            if (cur->n>=cur3->n)
            {
                temp=cur->n;
                cur->n=cur3->n;
                cur3->n=temp;
            }
            cur3=cur3->next;
        }
        cur=cur->next;
    }
    cur=newn;
    printf("The sorted elements are\n");
    while (cur->next!=NULL)
    {
        printf("%d\n",cur->n);
        cur=cur->next;
    }
    
}

int main()
{
    int choice;
   node head =NULL;
   while(1)
   {
       printf("enter mode\n");
       scanf("%d",&choice);
       switch(choice)
       {
       case 1:
        head=insert_next(head);
        break;
       case 2:
        head=insert_dow(head);
        break;
        case 3:
        display(head);
        break;
        case 4:
          sort(head);
        break;
        case 5:
        exit(0);
        break;
        default:
            printf("invalid option \n");
       }
   }
    return 0;
}