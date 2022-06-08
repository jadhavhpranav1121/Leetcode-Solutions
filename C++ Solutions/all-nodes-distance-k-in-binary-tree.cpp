// https://leetcode.com/problems/all-nodes-distance-k-in-binary-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> answer;
    void printSubtreeNodes(TreeNode* root,int k){
        if(root==NULL || k<0){
            return;
        }
        if(k==0){
            answer.push_back(root->val);
            return;
        }    
        printSubtreeNodes(root->left,k-1);
        printSubtreeNodes(root->right,k-1);   
    }   
    int printNodesAtk(TreeNode* root,TreeNode* target,int k){
        if(root==NULL){
            return -1;
        }   
        if(root==target){
            printSubtreeNodes(root,k);
            return 0;
        }
        int dl=printNodesAtk(root->left,target,k);
        if(dl!=-1){
             if(dl+1==k){
                 answer.push_back(root->val);
             }
             else{
                 printSubtreeNodes(root->right,k-dl-2);
             }
            return 1+dl;
        }
        int dr=printNodesAtk(root->right,target,k);
        if(dr!=-1){
             if(dr+1==k){
                 answer.push_back(root->val);
             }
             else{
                 printSubtreeNodes(root->left,k-dr-2);
             }
            return 1+dr;
        }
        return -1;
        
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
       printNodesAtk(root,target,k);
        
        return answer;
    }
};