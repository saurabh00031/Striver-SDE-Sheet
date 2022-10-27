class Solution {
public:
    
    int idx = 0;
    map<int, int> mp;
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        
        for(int i = 0; i < inorder.size(); i++)
        {
            mp[inorder[i]] = i;
        }
        
        return constructTree(preorder, 0, mp.size()-1);       
    }
    
	
    TreeNode* constructTree(vector<int> &pre, int start, int end){
        if(start > end) return nullptr;
        
		
        TreeNode* curr = new TreeNode(pre[idx]);
        idx += 1;
        
        if(start == end) return curr;
        
		
        int pos = mp[curr->val];
        
		
        curr->left = constructTree(pre, start, pos-1);
		
	
         curr->right = constructTree(pre, pos+1, end);
        
        return curr;        
    }
};