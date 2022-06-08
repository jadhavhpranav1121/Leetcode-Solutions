// https://leetcode.com/problems/merge-k-sorted-lists

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> l;
        if(lists.size()==0){
            return NULL;
        }
        for(auto i:lists){
        {
                cout<<i<<" ";
                ListNode* temp=i;
            if(temp==NULL){
                continue;
            }
            while(temp!=NULL){
                l.push_back(temp->val);
                temp=temp->next;
            }
            }
        }
        sort(l.begin(),l.end());
        ListNode* new1;
        if(l.size()>0){
         new1=new ListNode(l[0]);
        }
        else{
            return NULL;
        }
        ListNode* temp=new1;
        for(int i=1;i<l.size();i++){
            if(temp==NULL){
                break;
            }
            temp->next=new ListNode(l[i]);
            temp=temp->next;
        }
        return new1;
    }
};