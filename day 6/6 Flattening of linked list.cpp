Node* merge(Node* first,Node* second)
{
    if(first==NULL)
      return second;
    if(second==NULL)
       return first;
     
     if(first->bottom==NULL) 
        {
            first->bottom=second;
            return first;
        }
      
      Node* cur1=first;
      Node* cur2=second;
      Node* forward=cur1->bottom;
      
      while(forward!=NULL && cur2!=NULL)
      {
          if((cur1->data <= cur2->data)&&(forward->data >= cur2->data))
          {
              cur1->bottom=cur2;
         Node* temp=cur2->bottom;
              cur2->bottom=forward;
              cur1=cur2;
              cur2=temp;
          }
          else
          {
              cur1=forward;
              forward=forward->bottom;
          }
          
      }
      if(forward==NULL)
            cur1->bottom=cur2;
    
    return first;        
}


Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL)
     return NULL;
     
     //divide in down and right
     Node *down=root;
     Node *right=root->next;
     down->next=NULL;
     
     //to get right list in sorted order using Recursion
     right=flatten(right);
     
     //merge down and right list
     return merge(down,right);
}