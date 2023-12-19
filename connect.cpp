/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
private:
    Node* prevNode=NULL;

    int height(Node* root){
        if(!root)return 0;
        if(!root->left && !root->right)return 1;
        if(!root->right || !root->left)return 1+max(height(root->right),height(root->left));
        else return 1+max(height(root->right),height(root->left));
    }

    void dfs(Node* root,int level){
        if(level==1){
            if(prevNode)prevNode->next=root;
            prevNode=root;
            return;
        }
        else{
            if(root->left)dfs(root->left,level-1);
            if(root->right)dfs(root->right,level-1);
        }
    }
public:
    Node* connect(Node* root) {
        if(!root)return root;
        int h=height(root);
        for(int i=1;i<=h;i++){
            dfs(root,i);
            prevNode=NULL;
        }
        return root;
    }
};
