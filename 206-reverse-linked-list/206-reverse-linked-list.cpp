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
    ListNode* reverseList(ListNode* head) {
        ListNode* x=head;
        int c=0;
        while(x){
            c++;
            x=x->next;
        }
        if(c<2){
            return head;
        }
        
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* tmp;
        while(curr!=NULL){
            tmp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=tmp;
        }
        return prev;
    }
};