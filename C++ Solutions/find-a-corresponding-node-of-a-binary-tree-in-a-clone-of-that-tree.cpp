// https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree

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
    void preorder(TreeNode* cloned,TreeNode* target,TreeNode** main1){
        if(!cloned){
            return;
        }
        if(target->val==cloned->val){
            (*main1)=cloned;
            return;
        }
        preorder(cloned->left,target,main1);
        preorder(cloned->right,target,main1);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* main1=NULL;
        if(!original and !cloned){
            return NULL;
        }
        preorder(cloned,target,&main1);
        return main1;
    }
};