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
NODE read_details(int d, int e)
{
    int i,j;
    NODE temp;
    temp = getnode();
    for ( i = 0; i < d; i++)
    {
        for ( j = 0; j < e; j++)
        {
            scanf("%d",&temp->rank[i][j]);
        }
        
    }
    return temp;
}
NODE insert_end (NODE head, int d, int e)
{  
	NODE new, cur;
    printf("enter data to node\n");
	new = read_details(d,e);
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
NODE display (NODE head, int d, int e, int m)
{
    int i,j,k;
	NODE cur;
	if(head==NULL)
	{
	   printf("Empty List\n");
	   return NULL;
	}
	//printf("elements are\n");
	cur = head;
	//printf("Rank");
	while (cur != NULL)
	{
        for ( k = 0; k < m; k++)
        {
        printf("elements of node %d\n", k+1);
        for ( i = 0; i < d; i++)
        {
            for ( j = 0; j < e; j++)
            {
                printf("%d\t",cur->rank[i][j]);
            }
            printf("\n");
        }
        cur = cur ->next;
        }
	   
	   
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
head=head->next;
cur->next=NULL;
//printf("Deleted: %d\n", cur->rank);
free(cur);
return head;
}
int main()
{
   NODE head=NULL;
   int m,i,j;
   int d,e;
  printf("enter number of nodes: ");
   scanf("%d", &m);
   printf("enter order of matrix in m x n\n");
   scanf("%d %d", &d,&e);
   for ( i = 0; i < m; i++)
   {
          head=insert_end(head,d,e);   
         
   }
    display(head,d,e,m);
   head= delete_front(head);
    display(head,d,e,m);
   return 0;
}