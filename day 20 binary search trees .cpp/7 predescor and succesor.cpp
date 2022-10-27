
/* BST Node
struct Node
{
	int key;
	struct Node *left, *right;
};
*/
#include<bits/stdc++.h>
// This function finds predecessor and successor of key in BST.
// It sets pre and suc as predecessor and successor respectively
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
if(!root)
return;
Node* succ=NULL;
Node* temp;
temp=root;
while(temp!=NULL)
{
    if(key>=temp->key)
    {
        temp=temp->right;
    }
    else
    {
        succ=temp;
        temp=temp->left;
    }
}
suc=succ;
succ=NULL;
temp=root;
while(temp!=NULL)
{
    if(key>temp->key)
    {
        succ=temp;
        temp=temp->right;
        
    }
    else
    {
        temp=temp->left;
    }
}
pre=succ;

}