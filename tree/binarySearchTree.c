#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
 struct node *next;
};
struct node s[20];int top=-1;
struct node *root;
void push(struct node *d)
{
    top++;
   s[top].data=d->data;
   s[top].left=d->left;
   s[top].right=d->right;
}
struct node pop()
{
 return s[top--];
}
void pretree()
{
    struct node *temp=root;
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
void ptree(struct node *t)
{
    if(t!=NULL)
    {
 printf("%d ",t->data);
        ptree(t->left);

        ptree(t->right);

    }
}
int main()
{
  insert(5);
  insert(3);
  insert(10);
   insert(1);
    insert(6);
     insert(14);
      ptree(root);

   printf("print pre order tree traversal\n");
   preetree();
}
