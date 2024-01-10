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
    int Max=INT_MIN;
    int dfs(TreeNode* root,int start){
        if(!root)return 0;
        int left=dfs(root->left,start);
        int right=dfs(root->right,start);
        if(root->val==start){
            Max=max(Max,max(left,right));
            return -1;
        }
        if(left<0 || right<0){
            Max=max(Max,abs(left)+abs(right));
            if(left<0)return left-1;
            else return right-1;
        }
        return 1+max(left,right);
    }
    int amountOfTime(TreeNode* root, int start) {
        int ans=dfs(root,start);
        return Max;
    }
};
