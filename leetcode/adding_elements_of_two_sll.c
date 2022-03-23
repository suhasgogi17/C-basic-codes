/*You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum.
Example:
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.*/


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
NODE insert_end1 (NODE head)
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
NODE sumofnode(NODE head, NODE head1)
{
 int i=0,j=0,n,m,s1,s2,sum;
 NODE cur1= head;
 NODE cur2= head1;
 s1=0;
 s2=0;
 n=1;
 while (cur1!=NULL)
 {
     s1=s1+cur1->rank*n;
     n=n*10;
     cur1=cur1->next;
     i=i+1;
 }
// printf("s1=%d\n",s1);
 m=1;
 while (cur2!=NULL)
 {
     s2=s2+cur2->rank*m;
     m=m*10;
     cur2=cur2->next;
     j=j+1;
 }
 //printf("s2=%d\n",s2);
 //printf("%d %d", i, j);
 sum=s1+s2;
 printf("%d\n",sum);
 
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
NODE display1 (NODE head)
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
int main()
{
   NODE head=NULL;
   NODE head1=NULL;
   int n,m,i,sum;
   printf("enter number of nodes to be created");
   scanf("%d", &n);
   scanf("%d", &m);
   for ( i = 0; i < n; i++)
   {
       head=insert_end(head);
   }
   for ( i = 0; i < m; i++)
   {
       head1=insert_end1(head1);
   }
   sumofnode(head,head1);
  // printf("%d",sum);
   //display(head);
   //display1(head1);
   return 0;
}
