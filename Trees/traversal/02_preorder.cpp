#include <bits/stdc++.h> 
/*
    Time Complexity: O( N )
    Space Complexity: O( N )

    where 'N' is the total number of nodes in the given binary tree.
*/

class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void preOrderTraverse(TreeNode* root, vector<int> &v);

vector<int> preorderTraversal(TreeNode* root)
{   
    vector<int> v;
    preOrderTraverse(root, v);
    return v;
}

void preOrderTraverse(TreeNode* root, vector<int> &v) 
{
    if (root) 
    {
        v.push_back(root->val);
        preOrderTraverse(root->left, v);
        preOrderTraverse(root->right, v);
    } 
}