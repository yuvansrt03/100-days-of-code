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
    vector<vector<int>>ans;
    void solve(TreeNode* root,int targetSum,vector<int>v){
        if(!root)return;
        v.push_back(root->val);
        if(!root->left && !root->right && root->val==targetSum){
            ans.push_back(v);
            return;
        }
        if(root->left)solve(root->left,targetSum-root->val,v);
        if(root->right)solve(root->right,targetSum-root->val,v);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(!root)return {};
        vector<int>v;
        solve(root,targetSum,v);
        return ans;
    }
};
