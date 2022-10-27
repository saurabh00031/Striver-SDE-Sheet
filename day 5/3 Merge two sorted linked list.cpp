
class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
          ListNode *p1=list1;
          ListNode *p2=list2;
          ListNode *dummy=new ListNode(-1);
          ListNode *p3=dummy;
        
        while((p2)&&(p1))
        {
            if(p1->val<=p2->val)
            {
                p3->next=p1;
                p1=p1->next;
                p3=p3->next;
            }
            else
            {
                p3->next=p2;
                p2=p2->next;
                p3=p3->next;
            }
        }
        
        
        while(p1)
        {
                p3->next=p1;
                p1=p1->next;
                p3=p3->next;
        }
        
        while(p2)
        {
                p3->next=p2;
                p2=p2->next;
                p3=p3->next; 
        }
        
        return dummy->next;
        
        
    }
};