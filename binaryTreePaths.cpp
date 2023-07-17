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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string each="";
        set<TreeNode*>setree;
        TreeNode* temp=root;
        each=to_string(root->val);
        while(temp!=NULL && setree.find(root)==setree.end()){
            if(temp->left && setree.find(temp->left)==setree.end()){
                temp=temp->left;
                each+="->"+to_string(temp->val);
            }
            else if(temp->right && setree.find(temp->right)==setree.end()){
                temp=temp->right;
                each+="->"+to_string(temp->val);
            }
            else{
                if(!temp->left && !temp->right)ans.push_back(each);
                each=to_string(root->val);
                setree.insert(temp);
                temp=root;
            }
        }
        return ans;
    }
};
