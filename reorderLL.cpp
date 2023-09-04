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
    void reorderList(ListNode* head) {
        if(!head)return;
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* temp=slow->next;
        slow->next=NULL;
        // if(fast)temp=temp->next;
        while(temp){
            ListNode* next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        ListNode* head2=prev;
        ListNode* head1=head;
        while(head2){
            ListNode* next1=head1->next;
            ListNode* next2=head2->next;
            head1->next=head2;
            head2->next=next1;
            head1=next1;
            head2=next2;
        }

    }
};
