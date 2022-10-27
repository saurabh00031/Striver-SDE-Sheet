
class Solution {
public:
    void deleteNode(ListNode* first) 
    {
     
        ListNode *p=first;
        ListNode *q=first;
        
        
        p=p->next;
        
        q->val=p->val;
        
        q->next=p->next;
      
        
        
     
        
        
    }
};