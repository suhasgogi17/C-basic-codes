#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct mar
{
   int val;
   struct mar *next;
   struct mar *prev;
};
typedef struct mar *NODE;
NODE getnode()
{
	NODE newn;
	newn=(NODE)malloc(sizeof(struct mar));
	if(newn==NULL)
	{
		printf("Not created\n");
		exit(0);
	}
	newn->next = NULL;
    newn->prev = NULL;
	return newn;
}
NODE read_details()
{
    NODE temp;
    temp = getnode();
    scanf("%d",&temp->val);
    return temp;
}
NODE insert_end (NODE head)
{  
	NODE new, cur;
	new = read_details();
	new ->next = NULL;
    new->prev = NULL;
         	if(head==NULL)
	          return new;
	cur = head;
	while (cur->next != NULL)
	{   
		cur = cur->next;
	}
	cur -> next = new;
    new->next = NULL;
    new->prev = cur;
     	return head;
}
NODE insert_front (NODE head)
{
    NODE newn, cur;
    printf("enter the data to insert at front\n");
    newn= read_details();
    if(head==NULL)
        return newn;
    cur = head;
    printf("%d\n",cur->val);
    //cur=cur->next;
    //printf("%d\n",cur->val);
    head= newn;
    newn->next=cur;
    cur->prev=newn;
    return head;
}
NODE insert_pos(NODE head)
{
   NODE newn, cur1,cur2;
   int n,p;
   n=0;
   cur1=head;
   while (cur1->next!=NULL)
   {
       cur1=cur1->next;
       n=n+1;
   }
   cur1=head;
   printf("enter the position to insert\n");
   scanf("%d", &p);
   if (p<0||p>n)
   {
       printf("invalid position\n");
       return head;
   }
   printf("enter the data for position\n");
   newn=read_details();
   while (--p)
   {
       cur1=cur1->next;
   }
   cur2=cur1->next;
   newn->prev=cur1;
   cur1->next=newn;
   newn->next=cur2;
   cur2->prev=newn;
   return head;
}
NODE display (NODE head)
{
	NODE cur;
	if(head==NULL)
	{
	   printf("Empty List\n");
	   return NULL;
	}
	printf("elements are\n");
	cur = head;
	//printf("Rank");
	while (cur != NULL)
	{
	   printf("%d\n",cur->val);
	   cur = cur ->next;
	}
}
NODE delete_front (NODE head)
{
NODE cur;
if(head==NULL)
{
	printf("List Empty\n");
	return head;
}
cur=head;
head=cur->next;
printf("Deleted: %d\n", cur->val);
cur->next=NULL;
cur->prev=NULL;
free(cur);
return head;
}
int main()
{
   NODE head=NULL;
   int n,i;
   printf("enter number of nodes to be created");
   scanf("%d", &n);
   for ( i = 0; i < n; i++)
   {
       head=insert_end(head);
   }
   display(head);
   /*head= insert_front(head);
   display(head);
   head= insert_pos(head);
   display(head);*/
   head=delete_front(head);
   display(head);
   return 0;
}