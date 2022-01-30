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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        stack<int> stk;
        ListNode* tmp=head;
        while(tmp){
            stk.push(tmp->val);
            tmp=tmp->next;
        }
        
        tmp=head;
        while(tmp && !stk.empty()){
            if(stk.top()==tmp->val){
                stk.pop();
                tmp=tmp->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};