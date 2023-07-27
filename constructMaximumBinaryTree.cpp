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
    TreeNode* solve(vector<int>nums ,int i, int j){
        if(i>j)return NULL;
        int maxe=nums[i];
        int it=i;
        for(int k=i;k<=j;k++){
            maxe=max(maxe,nums[k]);
            if(nums[k]==maxe)it=k;
        }
        TreeNode* temp = new TreeNode(maxe);
        temp->left=solve(nums,i,it-1);
        temp->right=solve(nums,it+1,j);
        return temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode *root=solve(nums,0,nums.size()-1);
        return root;
    }
};
