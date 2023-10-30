/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include <stack>
#include <vector>

vector<int> preOrder(TreeNode<int>* root){
    stack<TreeNode<int>*> stack;
    vector<int> res;
    stack.push(root);
    while(!stack.empty()) {
        TreeNode<int> *node = stack.top();
        res.push_back(node->data);
        stack.pop();
        if (node->right) stack.push(node->right);
        if (node->left) stack.push(node->left);
    }
    return res;
}
