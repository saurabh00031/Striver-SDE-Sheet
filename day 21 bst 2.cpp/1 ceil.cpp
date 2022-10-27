#include <bits/stdc++.h>
using namespace std;
 
/* A binary tree node has key, left child and right child */
struct Node {
    int data;
    Node *left, *right;
 
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
 
// Helper function to find floor and ceil of a given key in BST
void floorCeilBSTHelper(Node* root, int key, int& floor, int& ceil)
{
 
    while (root) {
 
        if (root->data == key) {
            ceil = root->data;
            floor = root->data;
            return;
        }
 
        if (key > root->data) {
            floor = root->data;
            root = root->right;
        }
        else {
            ceil = root->data;
            root = root->left;
        }
    }
    return;
}
 
// Display the floor and ceil of a given key in BST.
// If key is less than the min key in BST, floor will be -1;
// If key is more than the max key in BST, ceil will be -1;
void floorCeilBST(Node* root, int key)
{
 
    // Variables 'floor' and 'ceil' are passed by reference
    int floor = -1, ceil = -1;
 
    floorCeilBSTHelper(root, key, floor, ceil);
 
    cout << key << ' ' << floor << ' ' << ceil << '\n';
}
 
// Driver program to test above function
int main()
{
    Node* root = new Node(8);
 
    root->left = new Node(4);
    root->right = new Node(12);
 
    root->left->left = new Node(2);
    root->left->right = new Node(6);
 
    root->right->left = new Node(10);
    root->right->right = new Node(14);
 
    for (int i = 0; i < 16; i++)
        floorCeilBST(root, i);
 
    return 0;
}