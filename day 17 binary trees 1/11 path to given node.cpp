
//vector<int>v;

bool getPath(TreeNode *root,int B,vector<int>&v)
{
    if(root==NULL)
    {
        return false;
    }
    
    v.push_back(root->val);
    
    if(root->val==B)
    {
        return true;
    }
    
    if((getPath(root->left,B,v))||(getPath(root->right,B,v)))
    {
        return true;
    }
    
    v.pop_back();
    
    return false;
    
}

vector<int> Solution::solve(TreeNode* root, int B)
{
    
    vector<int>v;
    
    if(root==NULL)
    {
        return v;
    }
    
    
    getPath(root,B,v);
    
    return v;
    
    
}
