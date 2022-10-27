class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "";
        
        queue<TreeNode*> q;
        string str = to_string(root->val) + " ";
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            
                TreeNode* curr = q.front();
                q.pop();
                
                if(curr->left) {q.push(curr->left); str += to_string(curr->left->val) + " ";}
                else str += "* ";
                if(curr->right) {q.push(curr->right); str += to_string(curr->right->val) + " ";}
                else str += "* ";
            
        }
        str.pop_back();
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data == "") return NULL;
        
        queue<TreeNode*> q;
        int i = 0, len = data.length();
        TreeNode* root = new TreeNode(getNum(data,i,len));//
        q.push(root);
        
        while(!q.empty()){
                TreeNode* curr = q.front();
                q.pop();
                if(data[i] == '*')  i+=2;  
                else {
                    curr->left = new TreeNode(getNum(data,i,len)); 
                    q.push(curr->left);
                }
                if(data[i] == '*')  i+=2;
                else{
                    curr->right = new TreeNode(getNum(data,i,len)); 
                    q.push(curr->right);
                }     
        }
        
        return root;
    }
    
    int getNum(string& data, int& i, int& len){
        string num = "";
        while(i<len and data[i]!=' ') num+=data[i++];
        i++;
        return stoi(num);
    }
};