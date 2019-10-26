#include<stdio.h>
int Stack[10], front=-1,rear=0;


int endque(int item)
{
  if (rear==front)
  {
    printf("OVERFLOW");
    return -1;
  }
  printf("%d added to que\n",item);
  Stack[rear++] = item;


}

// Function to remove an item from stack.  It decreases top by 1
int deque()
{
  int temp;
  if (rear<=front)
  {
    printf("UNDERFLOW \n");
    return -1;
  }
  temp=Stack[++front];
  printf("%d removed from que\n", temp);

}

int main()
{
  int temp;
 endque(10);
 endque(20);
 endque(30);
 endque(40);
 endque(50);


 deque();deque();deque();deque();deque();
  return 0;
}
