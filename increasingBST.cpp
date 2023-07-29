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
    TreeNode* ans=NULL;
    TreeNode* temp=ans;
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)return NULL;
        increasingBST(root->left);
        if(ans==NULL){
            ans=root;
            temp=ans;
        }
        else{
            temp->right=new TreeNode(root->val);
            temp=temp->right;
            // cout<<temp->right<<endl;
        }
        increasingBST(root->right);
        return ans;
    }
};
