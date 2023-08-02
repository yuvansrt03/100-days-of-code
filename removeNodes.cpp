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
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*>st;
        st.push(head);
        ListNode* temp=head->next;
        while(temp!=NULL){
            while(st.size()>0 && st.top()->val<temp->val){
                st.pop();
            }
            st.push(temp);
            temp=temp->next;
        }
        ListNode* ans=st.top();
        st.pop();
        while(st.size()>0){
            st.top()->next=ans;
            ans=st.top();
            st.pop();
        }
        return ans;
    }
};
