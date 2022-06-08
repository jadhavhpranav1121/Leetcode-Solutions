// https://leetcode.com/problems/deepest-leaves-sum

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
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    void sumOfDeepestNode(TreeNode* root,int levels,int &sum){
        if(!root) return;
        if(levels==1){
            sum+=root->val;
        }
        if(root->left) sumOfDeepestNode(root->left,levels-1,sum);
        if(root->right) sumOfDeepestNode(root->right,levels-1,sum);
    }
    int deepestLeavesSum(TreeNode* root) {
        int levels=height(root);   
        int sum=0;
        sumOfDeepestNode(root,levels,sum);
        return sum;
    }
};