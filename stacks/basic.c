#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
     // return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push() {
    int data;
   scanf("%d", &data);
   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {
   // push items on to the stack 
   int n,k;
   scanf("%d",&n);
   for (int i = 0; i < n; i++)
  {
      push();
  }
  if (top > 0)
    {
      for (int i = 0; i <= top; i++)
	{
	  printf ("%d\n", stack[i]);
	}
    }
   printf("enter k\n");
   scanf("%d",&k);
   for (int i = 0; i < k; i++)
  {
      pop();
  }
   if (top > 0)
    {
      for (int i = 0; i <= top; i++)
	{
	  printf ("%d\n", stack[i]);
	}
    }
   
   return 0;
}