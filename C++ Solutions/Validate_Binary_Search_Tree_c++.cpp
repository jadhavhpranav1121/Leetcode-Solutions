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
    bool isBST(TreeNode* root,long long int min,long long int max){
        if(!root){
            return true;
        }
        else if(min<root->val and root->val<max){
            return true and isBST(root->left,min,root->val) and isBST(root->right,root->val,max);
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        if(!root){
            return true;
        }
        if(root->left==NULL and root->right==NULL) return true;
        long long int min1=LLONG_MIN;
        long long int max1=LLONG_MAX;
        return isBST(root,min1,max1);
    }
};
