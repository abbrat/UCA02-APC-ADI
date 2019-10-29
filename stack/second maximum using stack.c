#include<stdio.h>
int Stack[5], top=-1;

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
int push(int item)
{
  if (isFull())
  {
    printf("OVERFLOW");
    return -1;
  }
  printf("%d pushed to stack\n",item);
  Stack[++top] = item;
  printf("Top is now at %d\n", top);
}

// Function to remove an item from stack.  It decreases top by 1
int pop()
{
  int temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  temp=Stack[top--];
  printf("%d popped from stack\n", temp);
  printf("Top is now at %d\n", top);
  return temp;
}
void secondMax(int max,int max2)
{
   if(isEmpty())
   {
       printf("\n\n\n%d\n\n\n",max2);
   }
   else
   {
       int a=pop();
       if(a>max)
       {
           max2=max;
           max=a;

       }
       else if(a<max &&a>max2)
       {
           max2=a;
       }
       secondMax(max,max2);
       push(a);
   }


}
int main()
{
  int temp;
  push(12);
  push(23);
 push(55);
 push(45);
 push(25);
 pop();
 pop();
 secondMax(0,0);
  return 0;
}
