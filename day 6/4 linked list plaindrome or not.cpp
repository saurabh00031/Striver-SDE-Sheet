/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        vector<int>v;
        
        ListNode *p=head;
        
        while(p)
        {
            v.push_back(p->val);
            p=p->next;
        }
        
        int n=v.size();
        
        for(int i=0;i<n/2;i++)
        {
            if(v[i]==v[n-i-1])
            {
                
            }
            else
            {
                return false;
            }
        }
        
        return true;
        
    }
};