class Solution {
public:

    vector<int>v;
    
    bool isleaf(Node *root)
    {
        if((root->left==NULL)&&(root->right==NULL))
        {
            return true;
        }
        
        return false;
    }
    
    
    void addLeft(Node *root)
    {
       Node *curr=root->left;
       
       while(curr)
       {
           if(!isleaf(curr))
           {
               v.push_back(curr->data);
           }
           
           if(curr->left)
           {
               curr=curr->left;
           }
           else
           {
               curr=curr->right;
           }
       }
       
       
    }
    
    
    void addLeaf(Node *root)
    {
        if(isleaf(root))
        {
            v.push_back(root->data);
            return;
        }
        
        
        if(root->left)
        {
            addLeaf(root->left);
        }
        
        if(root->right)
        {
            addLeaf(root->right);
        }
        
        
    }
    
    void addRight(Node *root)
    {
       Node *curr=root->right;
       vector<int>sp;
       
       while(curr)
       {
           if(!isleaf(curr))
           {
               sp.push_back(curr->data);
           }
           
           if(curr->right)
           {
               curr=curr->right;
           }
           else
           {
               curr=curr->left;
           }
       }
       
       for(int i=sp.size()-1;i>=0;i--)
       {
           v.push_back(sp[i]);
       }
       
       
    }
    
    
    
    
    
    
    vector<int>boundary(Node *root)
    {
       
       if(root==NULL)
       {
           return v;
       }
       
       
       if(!isleaf(root))
       {
           v.push_back(root->data);
       }
       
       addLeft(root);
       addLeaf(root);
       addRight(root);
       
       
       return v;
    }
};