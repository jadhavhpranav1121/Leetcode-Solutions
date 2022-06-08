// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer

/*
*
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
    int getDecimalValue(ListNode* head) {
        int totallength=0;
        ListNode* temp=head;
        while(temp!=NULL){
            totallength+=1;
            temp=temp->next;
        }
        temp=head;
        int totalValue=0;
        while(temp!=NULL){
            totallength--;
            if(temp->val==1){
                totalValue+=((temp->val)*pow(2,totallength));
            }
            temp=temp->next;
        }
        return totalValue;
    }
};