// https://leetcode.com/problems/second-minimum-node-in-a-binary-tree

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
    int findSecondMinimumValue(TreeNode* root) {
        if(!root){
            return -1;
        }
        int left1,right1;
        if(root->left==NULL and root->right==NULL)
            return -1;
        if(root->left){
             left1=root->left->val;
        }
        if(root->right){
             right1=root->right->val;
        }
        if(root->val==root->left->val){
            left1=findSecondMinimumValue(root->left);
        }
        if(root->val==root->right->val){
            right1=findSecondMinimumValue(root->right);
        }
        
        if(left1!=-1 and right1!=-1){
            return min(left1,right1);
        }
        else if(left1!=-1){
            return left1;
        }
        else{
            return right1;
        }
    }
};