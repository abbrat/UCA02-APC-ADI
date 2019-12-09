struct Node* revAltKNodes (struct Node* head, int k) 
{
     if(head==NULL)
       return NULL;
  struct Node *curr=head;
  struct Node *prev=NULL;
  struct Node *next;
    int count =0;
  while(curr!=NULL && count<k)
  {
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    count++;
  }
  if(head!=NULL)
    head->next=curr;
  count=0;
  while(curr!=NULL && count<k-1)
  {
    curr=curr->next;
    count++;
  }
  if(curr!=NULL)
  {
    curr->next=revAltKNodes(curr->next,k);
  }
  return prev;
}