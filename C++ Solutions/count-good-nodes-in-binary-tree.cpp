// https://leetcode.com/problems/count-good-nodes-in-binary-tree

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
    int findGreat(TreeNode* root,int target){
        if(!root) return 0;
        if(root->val<target) return findGreat(root->left,target)+findGreat(root->right,target);
        if(root->val>=target) return 1+findGreat(root->left,root->val)+findGreat(root->right,root->val);
        return 0;
    }
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        return 1+(findGreat(root->left,root->val)+findGreat(root->right,root->val));
    }
};