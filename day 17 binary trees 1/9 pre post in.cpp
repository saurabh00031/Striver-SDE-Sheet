
class Solution {
public:
    
    
    vector<int> preorderTraversal(TreeNode* root)
    {
       
         vector<int>v;
        
        if(root==NULL)
        {
            return v;
        }
        
        stack<TreeNode*>st;
        st.push(root);
        
        while(!st.empty())
        {
            root=st.top();
            st.pop();  
            
            v.push_back(root->val);
            
            if(root->right!=NULL)
            {
                st.push(root->right);
            }
            
            if(root->left!=NULL)
            {
                st.push(root->left);
            }
        }
        
        return v;
        
    }
};