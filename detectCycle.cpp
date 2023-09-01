/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;
        ListNode* slow=head->next;
        ListNode* fast=head->next->next;
        while(fast!=NULL && fast->next!=NULL && slow!=fast){
            // cout<<"hey"<<endl;
            slow=slow->next;
            fast=fast->next->next;
        }
        if(fast==NULL || fast->next==NULL)return NULL;
        slow=head;
        // cout<<slow->val<<" "<<fast->val<<endl;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};
