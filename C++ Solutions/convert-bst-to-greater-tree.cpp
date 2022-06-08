// https://leetcode.com/problems/convert-bst-to-greater-tree

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
    void postorder(TreeNode* root,int &answer){
        if(!root) return;
        postorder(root->right,answer);
        root->val=root->val+answer;
        answer=root->val;
        postorder(root->left,answer);
    }
    TreeNode* convertBST(TreeNode* root) {
         if(!root){
            return NULL;
        }
        int answer=0;
        postorder(root,answer);
        return root;
    }
};