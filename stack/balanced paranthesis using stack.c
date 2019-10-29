#include<stdio.h>
struct para{
int ind;
char c;
};

int top=-1,SIZE=10;
struct para s[10];
int isFull()
{
  if(top==SIZE-1)
  return 1;
  else
    return 0;
}

int isEmpty()
{
 if(top==-1)
  return 1;
  else
    return 0;
}
struct para peek()
{
  return s[top];
}
// Function to add an item to stack.  It increases top by 1
void push(int i,char h)
{
  if (isFull())
  {
    printf("OVERFLOW");
    return -1;
  }
  //printf("%c pushed to stack\n",h);
  top++;
  s[top].c = h;
  s[top].ind=i;
 // printf("Top is now at %d\n", top);
}

// Function to remove an item from stack.  It decreases top by 1
struct para pop()
{
  struct para temp;
  if (isEmpty())
  {
    printf("UNDERFLOW \n");

  }
  else{
  temp=s[top];
  top--;
 // printf("%d popped from stack\n", temp);
  //printf("Top is now at %d\n", top);
  return temp;}
}

int main()
{
 int a=6;
   int f=0;
    for(int i=0;i<=a;i++)
    {
        char b;
        scanf("%c",&b);
        if (b == '{' || b == '(' || b == '[')
        {
            push(f,b);
            f++;
        }

        else if (b == '}' || b == ')' || b == ']')
        {
            struct para a=peek();
            if(a.c == '{' && b=='}' || a.c == '(' && b==')' || a.c == '[' && b==']')
            {
                pop();

            }
           else{
                printf("This string is unbalanced at %d      %c\n",a.ind,b);

            }
        }
    }
     if(isEmpty())
    printf("Balanced ");


return 0;
}
