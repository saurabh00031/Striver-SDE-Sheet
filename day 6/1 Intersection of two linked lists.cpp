/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int len(ListNode *p)
    {
        int ct=0;
        
        while(p)
        {
            p=p->next;
            ct++;
        }
        
        return ct;
        
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        
        
        ListNode *ptr1=headA;
        ListNode *ptr2=headB;
        
        int l1=len(ptr1);
        int l2=len(ptr2);
        int d;
        
        if(l1>=l2)
        {
            d=l1-l2;
            ptr1=headA;
            ptr2=headB;
        }
        else
        {
            d=l2-l1;
            ptr1=headB;
            ptr2=headA;
            
        }
        
        while(d--)
        {
            ptr1=ptr1->next;
            
            if(ptr1==NULL)
            {
                return NULL;
            }
        }
        
        while(ptr1!=NULL and ptr2!=NULL)
        {
            if(ptr1==ptr2)
            {
                return ptr1;
            }
            
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            
        }
        
        return NULL;
        
        
    }
};