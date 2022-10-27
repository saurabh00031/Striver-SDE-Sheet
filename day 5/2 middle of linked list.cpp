
class Solution {
public:
    
    
    int ctr(ListNode *p)
    {
        int ct=0;
        
        while(p)
        {
            ct++;
            p=p->next;
        }
        
        return ct;
    }
    
    ListNode* middleNode(ListNode* head)
    {
     
        int ct=ctr(head);
        
      
            ct=ct/2+1;
       
        ListNode *p=head;
        
        for(int i=0;i<ct-1;i++)
        {
            p=p->next;
        }
        
        ListNode *k=p;
        
        return k;
        
        
    }
};