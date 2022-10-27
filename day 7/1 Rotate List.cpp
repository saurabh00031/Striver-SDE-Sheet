
class Solution {
public:
    
    
    ListNode* rotateRight(ListNode* head, int k) 
    {
        

        
         if((head==NULL)||(k==0)||(head->next==NULL))
         {
             return head;
         }
        
        
        ListNode *p=head; 
        int ct=1;
    
        while(p->next!=NULL)
        {
        
            p=p->next;
            ct++;
        }
        
        cout<<endl;
        
        p->next=head; //looped
        
        
        k=k%ct;
        --ct;
        
        while(ct>=k)
        {
           
            p=p->next;
            ct--;
        }
        
       cout<<endl;
        
       
        
      
        ListNode *first=p->next;
        p->next=NULL;
        
        return first;
        
    }
};