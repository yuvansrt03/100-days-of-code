/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        //emptyLL
        if(!head || !head->next)return head;

        //length of the linked list
        int len=0;
        ListNode* temp=head;
        // cout<<temp->val<<endl;
        while(temp){
            temp=temp->next;
            len++;
        }
        // cout<<len<<endl;
        //k mod n
        k=k%len;
        if(k==0)return head;
        //anticlockwise
        k=len-k; //1 4 , 2 3 , 3 2 ,4 1 (len - k)
        temp=head;

        //get to the Kth node
        for(int i=0;i<k;i++){
            temp=temp->next;
        }

        ListNode* ans=new ListNode(temp->val),*tempans=ans;
        temp=temp->next;
        if(temp==NULL)temp=head;
        for(int i=1;i<len;i++){
            // cout<<temp->val<<endl;
            tempans->next=new ListNode(temp->val);
            tempans=tempans->next;
            temp=temp->next;
            if(temp==NULL)temp=head;
        }
        return ans;
    }
};
