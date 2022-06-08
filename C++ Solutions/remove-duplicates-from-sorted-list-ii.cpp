// https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii

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
        if(head==NULL || head->next==NULL) return head;
        ListNode* dummy=new ListNode(INT_MIN);
        dummy->next=head;
        ListNode* it=head;
        ListNode* prev=dummy;
        while(it!=NULL and it->next!=NULL){
            bool isDuplicate=false;
            while(it!=NULL and it->next!=NULL and it->val==it->next->val){
                isDuplicate=true;
                it=it->next;
            }
            if(!isDuplicate){
                prev=prev->next;
            }
            else{
                prev->next=it->next;
            }
            it=it->next;
        }
        return dummy->next;
    }
};