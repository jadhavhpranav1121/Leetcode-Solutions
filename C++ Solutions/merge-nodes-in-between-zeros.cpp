// https://leetcode.com/problems/merge-nodes-in-between-zeros

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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* answer=new ListNode();
        ListNode* answer1=answer;
        while(temp!=NULL){
             if(temp->val==0){
                 if(temp->next!=NULL){
                        answer->next=new ListNode();
                 }
                answer=answer->next;
                temp=temp->next;
            }
            while(temp && temp->val!=0){
                answer->val+=(temp->val);
                temp=temp->next;
            }
           
        }
        return answer1->next;
    }
};