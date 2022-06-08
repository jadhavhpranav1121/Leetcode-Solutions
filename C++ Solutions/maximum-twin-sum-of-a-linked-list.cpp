// https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list

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
    ListNode* medium(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=head;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=NULL;
        return slow;
    }
    ListNode* reverseList(ListNode* head){
        if(!head){
            return NULL;
        }
        ListNode* next=NULL;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    int pairSum(ListNode* head) {
        ListNode* temp=head;
        ListNode* mid=medium(temp);
        ListNode* reversed=reverseList(temp);
        int maximum_sum=INT_MIN;
        while(mid && reversed){
            if((mid->val+reversed->val)>maximum_sum){
                maximum_sum=(mid->val+reversed->val);
            }
            mid=mid->next;
            reversed=reversed->next;
        }
        return maximum_sum;
    }
};