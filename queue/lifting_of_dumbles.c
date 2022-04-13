#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct queue
{
    int data;
    struct queue *next;
}node;

node *enqueue(node *head,int wt)
{
    node *temp=(node *)malloc(sizeof(node));
    temp->data=wt;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        head->next=head;
    }
    else
    {
        node *p=head->next;
        while(p->next!=head)
        p=p->next;
        temp->next=head;
        p->next=temp;

    }
    return head;
}
void winner(node *head,int k1,int k2)
{
    int p1=0,p2=0;
    node *p=head;
    if((p->data)%k1==0 && (p->data)>(p->next->data))
            p1+=p->data;
        if((p->data)%k2==0 && (p->data)>(p->next->data))
            p2+=p->data;
    p=p->next;
    while(p!=head)
    {
        if((p->data)%k1==0 && (p->data)>(p->next->data))
            p1+=p->data;
        if((p->data)%k2==0 && (p->data)>(p->next->data))
            p2+=p->data;
        p=p->next;
    }
    printf("%d\n%d\n",p1,p2);
    if(p1>p2)
        printf("The winner is King\n");
    else
        printf("The winner is Sultan\n");
}
int main()
{
    node *head=NULL;
    int n,m,k1,k2;
    scanf("%d%d%d%d",&n,&m,&k1,&k2);
    for(int i=1;i<=n;i++)
    {
        int wt;
        scanf("%d",&wt);
        head=enqueue(head,wt);
    }
    if(m>=2)
        winner(head,k1,k2);
    else
        printf("Minimum number of players should be 2");
}