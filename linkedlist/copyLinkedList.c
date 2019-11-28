/*
struct Node
{
    int data;
    struct Node* next;
};

Above structure is used to define the linked list, You have to complete the below functions only */
  struct Node *new,*enew;
struct Node *copyList(struct Node *org)
{
  if(org==NULL)
  {
    struct Node *f;
    f=new;
    new=NULL;
    enew=NULL;
    return f;
  }
  else
  {
   if(new==NULL)
   {
     struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
     temp->data=org->data;
     temp->next=NULL;
     new=temp;
     enew=temp;
     copyList(org->next);
   }
    else
    {
       struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
     temp->data=org->data;
     temp->next=NULL;
      enew->next=temp;
      enew=temp;
      copyList(org->next);
    }
  }
}

