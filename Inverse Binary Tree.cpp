/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void swapnode(TreeNode* root){
        if(root==nullptr)return;
        swapnode(root->left);
        swapnode(root->right);
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
    TreeNode* invertTree(TreeNode* root) {
        swapnode(root);
        return root;
    }
};
