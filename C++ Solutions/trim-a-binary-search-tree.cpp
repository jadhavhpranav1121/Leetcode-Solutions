// https://leetcode.com/problems/trim-a-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insert(TreeNode* root,int value){
        if(!root){TreeNode* temp1=new TreeNode(value);cout<<temp1->val<<" ";return temp1;};
        
        if(value<=root->val){
            root->left=insert(root->left,value);
        }
        else if(value>root->val){
            root->right=insert(root->right,value);
        }
        return root;
    }
    void trimmed(TreeNode** temp,TreeNode* root,int low,int high){
        if(!root){
            return;
        }
        if(root->val>=low and root->val<=high){
            (*temp)=insert((*temp),root->val);
        }
        trimmed(temp,root->left,low,high);
        trimmed(temp,root->right,low,high);
        
    }
    TreeNode* trimBST(TreeNode* root, int low, int high) {
        TreeNode* temp=NULL;
        trimmed(&temp,root,low,high);
        return temp;
    }
};