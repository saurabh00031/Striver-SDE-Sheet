
class Solution {
public:
    
    ListNode * reverse(ListNode *p)
    {
        ListNode *q=NULL;
        ListNode *r=NULL;
        
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        ListNode *k=q;
        
        while(q)
        {
          //  cout<<q->val<<" ";
            q=q->next;
            
        }
        
        return k;
        
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
       ListNode *first=reverse(head);
    
       ListNode *p=first;
       ListNode *t=NULL;
        
       int index=n;
        
       if(index==1)
       {
           t=first;
           first=first->next;
           delete t;
           ListNode *f=reverse(first);
           return f;
           
       }
        else
        {
             for(int i=0;i<index-1;i++)
             {
                 t=p;
                 p=p->next;
             }
            
            t->next=p->next;
             delete p;   
        }
        
       ListNode *f=reverse(first);
       return f;
        
    }
};