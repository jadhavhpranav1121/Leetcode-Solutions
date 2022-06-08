// https://leetcode.com/problems/univalued-binary-tree

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
    bool isUnivaltree(TreeNode* root,int temp){
        if(!root){
            return true;
        }
        if(root->val!=temp){
         return false;      
        }
        bool answer=isUnivaltree(root->left,temp) & isUnivaltree(root->right,temp);
        return answer;
    }
    bool isUnivalTree(TreeNode* root) {
        if(!root){
            return true;
        }
        int temp=root->val;
        return isUnivaltree(root,temp);
    }
};