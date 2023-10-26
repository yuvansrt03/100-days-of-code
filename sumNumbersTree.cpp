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
    int allsum=0;
    void solve(TreeNode* root, int sum){
        if(!root)return;
        if(!root->left && !root->right){
            sum+=root->val;
            allsum+=sum;
        }
        if(root->left)solve(root->left,(sum+root->val)*10);
        if(root->right)solve(root->right,(sum+root->val)*10);
    }
    int sumNumbers(TreeNode* root) {
        if(!root)return 0;
        solve(root,0);
        return allsum;
    }
};
