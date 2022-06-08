// https://leetcode.com/problems/symmetric-tree

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
    bool symmetric(TreeNode* p,TreeNode* q){
        if(p==NULL and q==NULL) return true;
        if(p==NULL || q==NULL) return false;
        return (p->val==q->val) and (symmetric(p->left,q->right) and symmetric(p->right,q->left)); 
    }
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        if(root->left==NULL and root->right==NULL) return true;
        if(root->left==NULL || root->right==NULL) return false;
        return symmetric(root->left,root->right);
    }
};