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
ListNode* get_mid(ListNode* m){
    ListNode* slow=m;
    ListNode* fast=m;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
ListNode* reverse(ListNode* x){
    if(x==NULL || x->next==NULL){
        return x;
    }
    ListNode* tmp=x->next;
    x->next=NULL;
    ListNode* head=reverse(tmp);
    tmp->next=x;
    return head;
}
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        ListNode* mid=get_mid(head);
        ListNode* t=reverse(mid);
        ListNode* h=head;
        while(h&&t){
            if(h->val!=t->val){
                return false;
            }
            h=h->next;
            t=t->next;
        }
        
        return true;
    }
};