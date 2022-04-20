#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct stack
{
    int num[SIZE],top;
};
typedef struct stack STACK;

void push(STACK *s,int data);
int pop(STACK *s,int ch);
void display(STACK *s);
int peek(STACK *s);

int main()
{
    int ch,n,k,data;
    STACK st,*s;
    s=&st;
    s->top=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    printf("ENTER DATA TO PUSH:\n");
    scanf("%d",&data);
    push(s,data);
    }
    ch=0;
    scanf("%d",&k);
    for (int i = 0; i < k; i++)
    {
      data=pop(s,ch);
      ch++;
    }
    display(s);
                  
    return 0;
}

void push(STACK *s,int data)
{
    if(s->top==SIZE-1)
        printf("STACK OVERFLOW\n");
    else{
        s->num[++s->top]=data;
    }
}

int pop(STACK *s, int ch)
{
    int data;
    if(s->top==-1)
        printf("STACK UNDERFLOW\n");
    else{
        data=s->num[ch];
        return data;
    }
}

void display(STACK *s)
{
    int i;
    if(s->top==-1)
        printf("STACK EMPTY\n");
    else{
        printf("top->\n");
        for(i=0;i>=s->top;i++)
            printf("%d\n",s->num[i]);
        printf("\n");
    }
}

int peek(STACK *s)
{
    int data;
    if(s->top==-1)
        printf("STACK EMPTY\n");
    else{
        data=s->num[s->top];
        return data;
    }
}