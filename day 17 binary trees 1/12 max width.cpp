/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) 
    {
       
        if(root==NULL)
        {
            return NULL;
        }
      
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int ans=0;
        
        while(!q.empty())
        {
             int sz=q.size();
             int minn=q.front().second;
             int first,last;
            
            
            for(int i=0;i<sz;i++)
            {
                long long int curr=q.front().second-minn;
                TreeNode *node=q.front().first;
                q.pop();
                
                if(i==0)
                {
                    first=curr;
                }
                if(i==(sz-1))
                {
                    last=curr;
                }
                
                if(node->left)
                {
                    q.push({node->left,curr*2+1});
                }
                 
                if(node->right)
                {
                    q.push({node->right,curr*2+2});
                }
            }
            
            ans=max(ans,last-first+1);
        }
        
        return ans;
        
    }
};