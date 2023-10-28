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
    int ans=INT_MIN;
    int dfs(TreeNode* root){
        if(!root)return 0;
        int left=dfs(root->left);
        int right=dfs(root->right);
        ans=max(ans,max(root->val,max(root->val+left,max(root->val+right,root->val+left+right))));
        return max(root->val,max(root->val+left,root->val+right));
    }
    int maxPathSum(TreeNode* root) {
        if(root){
            dfs(root);
        }
        return ans;
    }
};
