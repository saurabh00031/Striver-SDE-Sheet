
class Solution {
public:
    
    vector<int>input;
    
    int pre_order(TreeNode *root)
    {
        if(root==NULL)
        {
            return 1;
        }
        
        input.push_back(root->val);
        
        pre_order(root->left);
        pre_order(root->right);
        
        return 1;
    }
    
    int kthSmallest(TreeNode* root, int k) 
    {
        
     pre_order(root);
        
        for(int i=0;i<input.size();i++)
        {
            cout<<input[i]<<" ";
        }
        
     priority_queue<int, vector<int>> pq(input.begin(),input.begin() + k);
 
     for (int i = k; i < input.size(); i++)
     {
      
        if (input[i] < pq.top())
        {
            pq.pop();
            pq.push(input[i]);
        }
     }
 

    return pq.top();
        
        
    }
};