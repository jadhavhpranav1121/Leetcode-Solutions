// https://leetcode.com/problems/remove-duplicates-from-sorted-list

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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* it=head;
        ListNode* prev=NULL;
        while(it!=NULL and it->next!=NULL){
            prev=it;
            while(it!=NULL and it->next!=NULL and it->val==it->next->val){
                it=it->next;
            }
            prev->next=it->next;
            it=it->next;
        }
        return head;
    }
};