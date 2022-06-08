// https://leetcode.com/problems/balanced-binary-tree

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
    int height(TreeNode* root){
        if(!root){
return 0;}
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root){
            return true;
        }
        if(root->left==NULL and root->right==NULL) return true;
        int lheight=0;
        int rheight=0;
        if(root->left){
            lheight=height(root->left);
        }
        if(root->right){
            rheight=height(root->right);
        }
        return abs(lheight-rheight)<2 and isBalanced(root->left) and isBalanced(root->right);
    }
};