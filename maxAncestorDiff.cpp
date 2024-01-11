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
    void dfs(TreeNode *root,int Min,int Max){
        if(!root)return;
        ans=max(ans,max(abs(root->val-Min),abs(root->val-Max)));
        dfs(root->left,min(Min,root->val),max(Max,root->val));
        dfs(root->right,min(Min,root->val),max(Max,root->val));
        return;
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root,root->val,root->val);
        return ans;
    }
};
