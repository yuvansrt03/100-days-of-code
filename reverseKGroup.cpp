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
    ListNode* reverse(ListNode* start,ListNode* end){
        ListNode* prev=NULL,*curr=start,*next;
        while(prev!=end){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1 || head==NULL)return head;
        ListNode* prev=NULL,*curr=head,*next=nullptr;
        int count=1;a
        ListNode* start=curr,*prevstart=curr;
        while(curr){
            if(count%k==0){
                ListNode* temp=reverse(start,curr);
                if(count==k){
                    head=temp;
                }
                else {
                    prevstart->next=temp;
                    prevstart=start;
                }
                start=next;
                curr=next;
                count++;
            }
            if(curr)curr=curr->next;
            if(curr)next=curr->next;
            count++;
        }
        if(start!=nullptr && start!=prevstart)prevstart->next=start;
        return head;
    }
};
