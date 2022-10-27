
class Solution {
public:
    
    int node_counter(ListNode *p)
    {
        
        int ct=0;
        
        while(p)
        {
            p=p->next;
            ct++;
        }
        
        return ct;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
        
        
        
        int counter=node_counter(head);
        
        if(counter==0)
        {
            return NULL;
        }
        
        
        ListNode *p=head;
        vector<int>v;
        
        while(p)
        {
            v.push_back(p->val);
            p=p->next; 
        }
        
    
        int maxx=counter/k;
        
        int N=maxx*k;
        
        vector<vector<int>>zp;
        vector<int>temp;
        
        int mix=0;
        
        for(int i=0;i<N;i++)
        {
            
            temp.push_back(v[i]);
            mix++;
            if((mix%(k))==0)
            {
                mix=0;
                reverse(temp.begin(),temp.end());
                zp.push_back(temp);
                temp.clear();
            }
            
        }
        
        vector<int>game;
        
        if(N!=counter)
        {
            
        for(int i=N;i<counter;i++)
        {
            game.push_back(v[i]);
        }
    
       // sort(game.begin(),game.end());
        zp.push_back(game);
        game.clear();
    
        }
        
        
        vector<int>finals;
        
        
        for(int i=0;i<zp.size();i++)
        {
            //sort(zp[i].begin(),zp[i].end());
            
            for(auto sp:zp[i])
            {
                finals.push_back(sp);
            }
        }
        
     //   cout<<zp[0][0]<<" "<<zp[0][1]<<endl;
    
        ListNode *first=NULL,*t=NULL;
        
        
        
        ListNode *last=NULL;
        
        first=new ListNode;
        first->val=finals[0];
        first->next=NULL;
        last=first;
        
        for(int i=1;i<counter;i++)
        {
            t=new ListNode;
            t->val=finals[i];
            t->next=NULL;
            last->next=t;
            last=t;
        }
        
    
        
        return first;
        
        
        
    }
};