#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
struct node *s[20];int top=-1;
struct node *root;
void push(struct node *d)
{
    top++;
   s[top]=d;
}
struct node * pop()
{
 return s[top--];
}
void preorder(struct node *root)
{
     struct node *temp=root;
push(NULL);

    while(temp!=NULL)
    {
     printf("%d ",temp->data);
if(temp->right!=NULL)
     push(temp->right);
     if(temp->left==NULL)
     {
       temp=pop();
      }else
      temp=temp->left;
    }
}

void inorder(struct node *root)
{
  struct node *temp=root;
  while(temp!=NULL && top!=-1)
  {
    while(temp!=NULL)
    {
      push(temp);
      temp=temp->left;
      //printf("jc\n");
    }
    if(temp==NULL && top!=-1)
    {
      temp=pop();
      printf("%d ",temp->data);
      if(temp->right==NULL)
      temp=NULL;
      else
      temp=temp->right;
    }
    if(temp!=NULL && top!=-1)
    break;
  }
}
int lev=0;
int level(struct node *root)
{
  if(root==NULL)
  {
    //lev++;
    return 0;
  }
  else{
    printf("ndvkbdskvbds\n");
  int l=level(root->left);
  int r=level(root->right);
  
  if(l>r)
  return l+1;
  else
  return r+1;}
}

void insert(int n)
{
   struct node *ptr,*parent;
   ptr=root;
   parent=root;
struct node *temp;
       temp=(struct node*)malloc(sizeof(struct node));
       temp->data=n;
       temp->left=NULL;
       temp->right=NULL;
   if(root==NULL)
   {
       root=temp;
       return;
   }
   else
   {
      while(ptr!=NULL)
      {
          if(ptr->data==n)
          {
              return;
          }
          else if(ptr->data>n)
          {
              parent=ptr;
              ptr=ptr->left;
          }
          else
          {
              parent=ptr;
              ptr=ptr->right;

          }
      }
      printf("%d   \n",parent->data);
          if(parent->data>n)
          {
              parent->left=temp;
          }
          else
          {
              parent->right=temp;

          }
   }
}

int main()
{
  insert(6);
  insert(3);
  insert(10);
  insert(1);
    insert(6);
    insert(2);
   /* insert(4);
     insert(14);*/
 
   //printf("\nprint pre order tree traversal   %d\n",top);
    preorder(root);
   printf("\n");
   //preorder(root);
  int g=level(root);
  printf("%d     ",g);

     return 0;
}
