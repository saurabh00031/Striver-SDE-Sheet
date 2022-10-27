
class Solution {
public:
       int counter(ListNode *p)
    {
        int ct=0;
        
        while(p)
        {
            p=p->next;
            ct++;
        }
        
        return ct;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        
        if(l1==NULL)
        {
            return NULL;
        }
        
        ListNode *p=l1;
        ListNode *q=l2;
        int N=max(counter(p),counter(q));
        cout<<N<<endl;
        
        
        ListNode *t1=l1;
        ListNode *t2=l2;
        int carry=0;
        ListNode *t;
        ListNode *first=new ListNode;
      
        ListNode *last=NULL;
        
        
        first->val=(t1->val+t2->val)%10;
        carry=(t1->val+t2->val)/10;
        first->next=NULL;
        last=first;
        
        t1=t1->next;
        t2=t2->next;
        
     
       
        
        for(int i=1;i<N;i++)
        {
            
            if((t1==NULL)&&(t2==NULL))
            {
                  t=new ListNode;
                  t->val=carry%10;
                  t->next=NULL;
                  last->next=NULL;
                  last-t;
                
            }
            else if(t2==NULL)
            {
                  t=new ListNode;
                  t->val=(t1->val+carry)%10;
                  t->next=NULL;
                  last->next=t;
                  last=t;
                  carry=(t1->val+carry)/10;
                  t1=t1->next;
                 // t2=t2->next;
            }
            else if(t1==NULL)
            {
                  t=new ListNode;
                  t->val=(t2->val+carry)%10;
                  t->next=NULL;
                  last->next=t;
                  last=t;
                  carry=(t2->val+carry)/10;
                 // t1=t1->next;
                  t2=t2->next;
            }
            else
            {
                  t=new ListNode;
                  t->val=(t1->val+t2->val+carry)%10;
                  t->next=NULL;
                  last->next=t;
                  last=t;
                  carry=(t1->val+t2->val+carry)/10;
                  t1=t1->next;
                  t2=t2->next;
            }
          
        }
     
    if(carry!=0)
    {
        t=new ListNode;
        t->val=carry;
        t->next=NULL;
        last->next=t;
        last=t;
    }
        
     return first;
       
    }
};