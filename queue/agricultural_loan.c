#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define max 20

struct farmer
{
    char name[max];
    char type_of_loan[max];
    int amount;
    struct farmer *next;
};

typedef struct farmer *node;


node front1=NULL;
node rear1=NULL;
node front2=NULL;
node rear2=NULL;

node getnode()
{
    node newnode;
    newnode=(node)malloc(sizeof(struct farmer));
    if(newnode==NULL)
    {
        printf("Memory error\n");
        return NULL;
    }

    scanf("%s%s%d",newnode->name,newnode->type_of_loan,&newnode->amount);
    newnode->next=NULL;
    return newnode;
}

void enqueue1(node newnode)
{
    if(rear1==NULL)
    {
        front1=rear1=newnode;
    }

    else
    {
        rear1->next=newnode;
        rear1=newnode;
    }
}

void enqueue2(node newnode)
{
    if(rear2==NULL)
    {
        front2=rear2=newnode;
    }

    else
    {
        rear2->next=newnode;
        rear2=newnode;
    }
}

void display1()
{
    node cur=front1;
    if(front1==NULL)
    {
        printf("Queue Empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s %s %d",cur->name,cur->type_of_loan,cur->amount);
        cur=cur->next;
        printf("\n");
    }

}

void display2()
{
    node cur=front2;
    if(front2==NULL)
    {
        printf("Queue Empty\n");
        return;
    }
    while(cur!=NULL)
    {
        printf("%s %s %d",cur->name,cur->type_of_loan,cur->amount);
        cur=cur->next;
        printf("\n");
    }

}

int main(){
    node newnode;
    int n, short1=0, long1=0,count=0;
    scanf("%d",&n);
    while(n--)
    {
        newnode = getnode();
        if (strcmp(newnode->type_of_loan,"short")==0 && (newnode->amount < 50000))
        {
            short1 = newnode->amount + short1;
            enqueue1(newnode);
            count++;
        }
        else if(strcmp(newnode->type_of_loan,"long")==0 && (newnode->amount < 100000)){
            long1 = newnode->amount +long1;
            enqueue2(newnode);
            count++;
        }
        
    }
    printf("Short term Application details\n");
    display1();
    if(short1!=0)
    {
       printf("%d\n",short1);
    }
    printf("Long term Application details\n");
    display2();
    if(long1!=0)
    {
       printf("%d\n",long1);
    }
    printf("%d\n",count);

}