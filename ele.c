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
NODE select(NODE head)
{
    NODE cur;
    int count=0;
    cur=head;
    if (cur->val>=150 && cur->val<cur->next->val)
    {
        printf("%d ", cur->val);
        count = count+1;
    }
    cur=cur->next;
    while (cur->next!=NULL)
    {
        if (cur->val>=150 && cur->val<cur->next->val && cur->val>cur->prev->val)
        {
            printf("%d ", cur->val);
        count = count+1;
        cur=cur->next;
        }
        else 
        cur=cur->next;
    }
    if (cur->val>=150 && cur->val>cur->prev->val)
    {
        printf("%d ", cur->val);
        count = count+1;
    }
    printf("\n%d",count);
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
   select(head);
   return 0;
}