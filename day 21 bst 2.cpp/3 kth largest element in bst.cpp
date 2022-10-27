/*
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    int kthLargest(Node *root, int K)
    {
        //Your code here
        if(root==NULL)
            return 0;
        stack<Node*>st;
        vector<int>vec;
        //st.push(root);
        Node *curr=root;
        while(curr!=NULL || !st.empty())
        {
            while(curr!=NULL)
            {
                st.push(curr);
                curr=curr->left;
            }
            curr=st.top();
            st.pop();
            vec.push_back(curr->data);
            curr=curr->right;
        }
        //reverse(vec.begin(),vec.end());
        return vec[vec.size()-K];
    }
};


















