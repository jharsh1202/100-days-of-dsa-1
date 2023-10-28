#include <bits/stdc++.h> 
/*
    Time Complexity: O( N )
    Space Complexity: O( N )

    where 'N' is the total number of nodes in the given binary tree.
*/

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};


void traversePostOrder(TreeNode *root, vector<int> &v);

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> v;
    traversePostOrder(root, v);
    return v;
}

void traversePostOrder(TreeNode *root, vector<int> &v) 
{
    if (root)
    {
        traversePostOrder(root->left, v);
        traversePostOrder(root->right, v);
        v.push_back(root->data);
    }
}

