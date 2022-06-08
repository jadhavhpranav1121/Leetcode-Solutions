// https://leetcode.com/problems/swapping-nodes-in-a-linked-list

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
    ListNode* reverse(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode *prev,*curr,*next;
        prev=NULL;
        curr=head;
        next=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev; 
            prev=curr; 
            curr=next;
           
        }
        return prev;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        int a=0;
        int b=0;
        k--;
        int c=k;
        ListNode* temp=head;
        while(c--){
            temp=temp->next;            
        }
        a=temp->val;
        head=reverse(head);
        temp=head;
        c=k;
        cout<<c<<endl;
         while(c--){
            temp=temp->next;            
        }
        
        b=temp->val;
        temp->val=a;
        head=reverse(head);
        temp=head;
        c=k;
         while(c--){
            temp=temp->next;            
        }
        temp->val=b;
        return head;
    }
};