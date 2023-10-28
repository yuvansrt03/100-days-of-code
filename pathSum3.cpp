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
    int ans=0;
    void solve(TreeNode* Node,long long int targetSum){
        if(!Node)return;
        if(Node->val==targetSum)ans++;
        solve(Node->left,targetSum-Node->val);
        solve(Node->right,targetSum-Node->val);

    }
    int pathSum(TreeNode* root, int targetSum) {
        if(root){
            solve(root,targetSum);
            if(root->left)pathSum(root->left,targetSum);
            if(root->right)pathSum(root->right,targetSum);
        }
        return ans;
    }
};
