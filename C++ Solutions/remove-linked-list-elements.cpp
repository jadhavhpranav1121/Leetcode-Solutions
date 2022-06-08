// https://leetcode.com/problems/remove-linked-list-elements

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
    ListNode* removeElements(ListNode* head, int val) {
     ListNode *p = head, *q, *leak;
        if(!head) return head;
        
        while(head && head->val == val){
            head = head->next; 
            delete(p);
            p = head;
        }
        if(!head) return head;
        
        q = head->next;
        while(q){
            if(q->val == val){
                p->next = q->next;
                leak = q;
                q = q->next;
                delete(leak);
            }
            else{
                q = q->next;
                p = p->next;
            }
        }
        return head;
     }
};