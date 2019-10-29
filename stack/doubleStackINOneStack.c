#include<stdio.h>
int Stack[10], top=-1,top1=10;

int isFull()
{
  if(top==5-1)
  return 1;
  else
    return 0;
}

int isEmpty()
{
  return top==-1;
}

// Function to add an item to stack.  It increases top by 1
int push(int item,int item2)
{
  if (top==top1)
  {
    printf("OVERFLOW");
    return -1;
  }
  printf("%d pushed to stack1\n",item);
  printf("%d pushed to stack2\n",item2);
  Stack[++top] = item;
  Stack[--top1]=item2;

}

// Function to remove an item from stack.  It decreases top by 1
int pop()
{
  int temp;
  if (isEmpty()||top1>=10)
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  temp=Stack[top--];
  int d=Stack[top1++];
  printf("%d popped from stack1\n", temp);
  printf("%d popped from stack2\n", d);

}

int main()
{
  int temp;
  push(12,10);
  push(23,9);
 push(34,8);
 push(45,7);
 push(25,6);
 pop();
 pop();
 pop();
 pop();
 pop();
  return 0;
}
