// https://leetcode.com/problems/add-two-numbers

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
    int carry=0;
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode(1);
        ListNode* head=temp;
       while(l1!=NULL && l2!=NULL){
           int value=(l1->val+l2->val)+carry;
           ListNode* newtemp=new ListNode(((value>=10)?(value%10):value));
            carry=((value>=10)?(value/10):0);
           temp->next=newtemp;
           l1=l1->next;
           l2=l2->next;
            temp=newtemp;
       } 
        while(l1!=NULL){
              int value=l1->val+carry;
              ListNode* newtemp=new ListNode(((value>=10)?(value%10):value));
                carry=((value>=10)?(value/10):0);
                temp->next=newtemp;
                l1=l1->next;
                temp=newtemp;
        }
        while(l2!=NULL){
              int value=l2->val+carry;
              ListNode* newtemp=new ListNode(((value>=10)?(value%10):value));
                carry=((value>=10)?(value/10):0);
                temp->next=newtemp;
                l2=l2->next;
                temp=newtemp;
        }
        if(carry>0){
             ListNode* newtemp=new ListNode(carry);
            temp->next=newtemp;
            temp=newtemp;
        }
        return head->next;
    }
};