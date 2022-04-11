#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int amt;
    long long int nor;
    char type[10];
    struct node *next;
};
typedef struct node* NODE;

NODE insert_end(NODE);
void Display(NODE);
NODE getNode();
NODE Delete_front(NODE);

int main()
{
    NODE head=NULL;
    int a;
    scanf("%d", &a);
    while(a--){
        head=insert_end(head);
    }
    Display(head);
  return 0;
}

NODE getNode()
{
    NODE NEWNODE;
    int ele;
    long long int no;
    NEWNODE=malloc(sizeof(struct node));
    if(NEWNODE==NULL)
    {
        printf("Memory is not allocated\n");
    }
  
    scanf("%lld %d %s",&no,&ele,NEWNODE->type);

    NEWNODE->amt=ele;
    NEWNODE->nor=no;

    NEWNODE->next=NULL;

    return NEWNODE;
}




NODE insert_end(NODE head)
{
    NODE Newnode=getNode();
    if(head==NULL)
    {
        head=Newnode;
        return head;
    }
    else
    {
        NODE temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=Newnode;

        return head;
    }
}

void Display(NODE head)
{
    if(head==NULL)
    {
        printf("Queue is Empty\n");
        return;
    }
    NODE temp=head;
    int pt=0, pp=0;
    char leftStr[] = "postpaid";
    char rightStr[] = "prepaid";
    printf("Postpaid Requests\n");
    while(temp!=NULL)
    {
        if(strcmp(temp->type,leftStr)==0)
        {
            printf("%lld %d %s\n", temp->nor, temp->amt, temp->type);
            pt=pt+temp->amt;
        }
        temp=temp->next;
    }
    if(pt==0)
    {
        printf("Queue Empty\n");
    }
    printf("%d\n", pt);
    temp=head;
    printf("Prepaid Requests\n");
    while(temp!=NULL)
    {
        if(strcmp(temp->type,rightStr)==0)
        {
            printf("%lld %d %s\n", temp->nor, temp->amt, temp->type);
            pp=pp+temp->amt;
        }
        temp=temp->next;
    }
    if(pp==0)
    {
        printf("Queue Empty\n");
    }
    printf("%d\n", pp);
}
