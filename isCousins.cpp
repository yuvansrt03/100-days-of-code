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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
        bool xfound=false;
        bool yfound=false;
        while(q.size()>0){
            int siz=q.size();
            int i=0;
            while(i<siz){
                TreeNode* temp=q.front();
                q.pop();
                if(temp->val==x)xfound=true;
                if(temp->val==y)yfound=true;

                if(temp->left && temp->right && 
                    (temp->left->val == x || temp->right->val == x )&& 
                    (temp->left->val==y || temp->right->val==y))return false;
                if(temp->left)q.push(temp->left);
                if(temp->right)q.push(temp->right);
                i++;
            }
            i=0;
            if(xfound && yfound)return true;
            if(xfound || yfound)return false;
        }
        return false;
    }
};
