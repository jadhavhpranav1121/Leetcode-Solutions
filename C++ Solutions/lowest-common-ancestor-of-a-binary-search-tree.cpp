// https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root){
            return NULL;
        }
        if(!p || !q){
            return NULL;
        }
        if(p->val>q->val){
            TreeNode* temp=p;
            p=q;
            q=temp;
        }
        if(p->val==root->val){
            return root;
        }
        // cout<<p->val<<"
        if(q->val==root->val){
            return root;
        }
        if(p->val<root->val and q->val>root->val){
            return root;
        }
        if(p->val<root->val and q->val<root->val){
            root=root->left;
        }
        if(p->val>root->val and q->val>root->val){
            root=root->right;
        }
        return lowestCommonAncestor(root,p,q);
    }
};