#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct mar
{
   int rank;
   struct mar *next;
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
	return newn;
}
NODE read_details()
{
    NODE temp;
    temp = getnode();
    scanf("%d",&temp->rank);
    return temp;
}
NODE insert_end (NODE head)
{  
	NODE new, cur;
	new = read_details();
	new ->next = NULL;
         	if(head==NULL)
	          return new;
	cur = head;
	while (cur->next != NULL)
	{   
		cur = cur->next;
	}
	cur -> next = new;
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
	printf("Rank");
	while (cur != NULL)
	{
	   printf("%d\n",cur->rank);
	   cur = cur ->next;
	}
}
/*NODE delete_front (NODE head)
{
NODE cur;
if(head==NULL)
{
	printf(“List Empty\n”);
	return head;
}
cur=head;
head=head->next;
printf(“Deleted: %s\n”, cur->name);
free(cur);
return head;
}*/
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
   return 0;
}