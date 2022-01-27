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
        ListNode* slow=head;
        ListNode* fast=slow;
        bool isCycle=false;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                isCycle=true;
                break;
            }
        }
        if(!isCycle){
            return NULL;
        }
        ListNode* p=head;
        while(p!=slow){
            p=p->next;
            slow=slow->next;
        }
        
        return p;
    }
};