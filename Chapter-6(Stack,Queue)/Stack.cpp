#include <stdio.h>
#include <iostream>
#define Stack_max 4
using namespace std;

typedef struct
{
    int top;
    int data[Stack_max];
}Stack;

void push(Stack *s,int item,int count)
{
    if(s->top < Stack_max)
    {
        s->data[s->top] = item;
        cout <<"We push index :"<< count <<": " << s->data[s->top] << endl;
        s->top = s->top +1;
    }
    else
    {
        cout <<"Stack is FULL.So,we can't push : " << item << endl;
    }
}
int pop(Stack *s)
{
    int item;
    if(s->top == 0)
    {
        printf("STACK IS EMPTY\n");
        return -1;
    }
    else
    {
        s->top = s->top -1;
        item = s->data[s->top];
         //cout <<"We pop index :"<< count <<": " << s->data[s->top] << endl;
    }
    return item;
}

int main()
{
   Stack s;
   int n,i=0;
   int item;
   s.top = 0;
   push(&s,1,i++);
   push(&s,2,i++);
   push(&s,3,i++);
   push(&s,4,i++);
   push(&s,9,i++);
   push(&s,7,i++);
   item = pop(&s);
   printf("POP: %d\n",item);
   item = pop(&s);
   printf("POP: %d\n",item);
   item = pop(&s);
   printf("POP: %d\n",item);
   item = pop(&s);
   printf("POP: %d\n",item);
   item = pop(&s);
   printf("POP: %d\n",item);
}
