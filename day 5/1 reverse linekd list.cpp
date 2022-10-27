
class Solution {
public:
    
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *p=head;
        ListNode *q=NULL;
        ListNode *r=NULL;
        
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        } 
        
        return q;
        
    }
};