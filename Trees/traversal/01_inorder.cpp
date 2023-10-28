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

void inOrderHelper(TreeNode *node, vector<int> &answer) {
    if (node == NULL) { return; }
    inOrderHelper(node->left, answer);
    answer.push_back(node->data);
    inOrderHelper(node->right, answer);
}

vector<int> getInOrderTraversal(TreeNode *root) {
    vector<int> answer;
    inOrderHelper(root, answer);
    return answer;
}