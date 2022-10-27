
/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        
        if(node==nullptr)
            return ;
            
        if(node->left)
            mirror(node->left);
        if(node->right)
            mirror (node->right);
            
        Node* temp = node->left;
        node->left=node->right;
        node->right=temp;
        
    
        
        
        
    }
};