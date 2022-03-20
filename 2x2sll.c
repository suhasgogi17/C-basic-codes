#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct mar
{
   int rank[100][100];
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
    int n, i,j;
    printf("enter order of matrix");
    scanf("%d",&n);
    NODE temp;
    temp = getnode();
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d",&temp->rank[i][j]);
        }
        
    }
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
    int i,j,n;
    n=2;
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
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                printf("%d\t",cur->rank[i][j]);
            }
            printf("\n");
        }
        
	   
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
   int m,i,j;
  printf("enter number of nodes: ");
   scanf("%d", &m);
   for ( i = 0; i < m; i++)
   {
          head=insert_end(head);   
         
   }
    display(head);
   return 0;
}