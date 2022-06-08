// https://leetcode.com/problems/increasing-order-search-tree

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
    TreeNode* main1=NULL;
    TreeNode* root1=NULL;
    
    void inorder(TreeNode* root){
        if(root){
        inorder(root->left);
        if(main1==NULL){
            main1=new TreeNode(root->val);
            root1=main1;
        }
        else{
            // cout<<root->val;
            main1->right=new TreeNode(root->val);
            main1=main1->right;
        }
        inorder(root->right);
    }
    }
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        return root1;
    }
};