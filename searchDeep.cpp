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
    int maxe;
    int searchdeep(TreeNode* root){
        if(root==NULL)return 0;
        int leftdeep=searchdeep(root->left);
        int rightdeep=searchdeep(root->right);
        maxe=max(maxe,leftdeep+rightdeep);
        // cout<<"LEFT "<<leftdeep<<" RIGHT "<<rightdeep<<endl;
        return max(leftdeep,rightdeep)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        searchdeep(root);
        return maxe;
        
    }
};
