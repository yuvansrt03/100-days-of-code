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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        s.push(root);
        while(s.size()>0){
            TreeNode* temp=s.top();
            s.pop();
            if(temp==NULL)break;
            ans.push_back(temp->val);
            if(temp->right!=NULL)s.push(temp->right);
            if(temp->left!=NULL)s.push(temp->left);
        }
        return ans;
    }
};
