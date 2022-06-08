// https://leetcode.com/problems/rotate-list

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head; 
        ListNode* rotate=head;
        ListNode* tail=head;
        int length=0;
        while(tail->next!=NULL){
            length++;
            tail=tail->next;
        }
        length++;
        k=k%length;
        while(length-k){        
            tail->next=head;
            rotate=head->next;
            head->next=NULL;
            head=rotate;
            tail=tail->next;
            k++;
        }
        return head;
    }
};