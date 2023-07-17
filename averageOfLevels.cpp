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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        double sum=0;
        double avg;
        queue<TreeNode*>q;
        q.push(root);
        int glocount=1;
        int tempcount=0;
        int incount=0;
        while(q.size()>0){
            TreeNode* temp=q.front();
            sum+=temp->val;
            q.pop();
            tempcount++;
            if(temp->left){
                q.push(temp->left);
                incount++;
            }
            if(temp->right){
                q.push(temp->right);
                incount++;
            }
            if(glocount==tempcount){
                avg=sum/tempcount;
                ans.push_back(avg);
                // cout<<"sum "<<sum<<"\ntempcount "<<tempcount<<"\nincount "<<incount<<endl;
                glocount=incount;
                tempcount=0;
                incount=0;
                sum=0;
            }
        }
        return ans;
    }
};
