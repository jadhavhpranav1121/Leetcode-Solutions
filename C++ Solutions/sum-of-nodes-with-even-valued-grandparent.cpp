// https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent

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
    void dfs(TreeNode* root,int &answer){
        if(!root) return;
        if(((root->val)&1)==0){
            if(root->left!=NULL and root->left->left!=NULL){
                answer+=root->left->left->val;
            }
            if(root->left!=NULL and root->left->right!=NULL){
                answer+=root->left->right->val;
            }
            if(root->right!=NULL and root->right->left!=NULL){
                answer+=root->right->left->val;
            }
            if(root->right!=NULL and root->right->right!=NULL){
                answer+=root->right->right->val;
            }
        }
        dfs(root->left,answer);
        dfs(root->right,answer);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int answer=0;
        dfs(root,answer);
        return answer;
    }
};