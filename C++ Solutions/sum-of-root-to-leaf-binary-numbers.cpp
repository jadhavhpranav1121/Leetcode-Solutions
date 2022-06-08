// https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers

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
    int sum1(TreeNode* root,int ans){
        if(!root){
            return 0;
        }
        ans=(ans<<1)+root->val;
         if(root->left==NULL and root->right==NULL){
            return ans;
        }
        return sum1(root->left,ans)+sum1(root->right,ans);
    }
    int sumRootToLeaf(TreeNode* root) {
        return sum1(root,0);
    }
};