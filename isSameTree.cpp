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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)return true;
        if(p && !q || !p && q)return false;
        bool head=p->val==q->val;
        bool fir=isSameTree(p->left,q->left);
        bool sec=isSameTree(p->right,q->right);
        return head&&fir&&sec;
    }
};
