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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* tmp=list1;
        int count=1;
        while(count<a){
            tmp=tmp->next;
            count++;
        }
        
        ListNode* prev=tmp;
        
        ListNode* l2=list2;
        
        while(count<=b+1){
            tmp=tmp->next;
            count++;
        }
        
        while(list2->next!=NULL){
            list2=list2->next;
        }
        prev->next=l2;
        list2->next=tmp;
        
        if(a==1){
            return prev;
        }
        
        return list1;
        
        
    }
};