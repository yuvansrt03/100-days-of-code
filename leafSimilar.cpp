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
    bool dfs(TreeNode* root,queue<int>&q,int op){
        if(!root)return true;
        if(!root->right && !root->left){
            if(op==0)q.push(root->val);
            else {
                if(q.empty() || root->val!=q.front())return false;
                q.pop();
            }
            return true;
        }
        return dfs(root->left,q,op) && dfs(root->right,q,op);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        queue<int>temp;
        return dfs(root1,temp,0) && dfs(root2,temp,1) && temp.size()==0;
    }
};
