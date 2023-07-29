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
    vector<int>v;
    void solve(TreeNode* root){
        if(root==NULL)return;
        minDiffInBST(root->left);
        v.push_back(root->val);
        minDiffInBST(root->right);
        return;
    }
    int minDiffInBST(TreeNode* root) {
        solve(root);
        int minval=INT_MAX;
        for(int i=1;i<v.size();i++){
            minval=min(minval,abs(v[i]-v[i-1]));
        }
        return minval;
    }
};
