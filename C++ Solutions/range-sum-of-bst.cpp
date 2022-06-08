// https://leetcode.com/problems/range-sum-of-bst

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
    int sum=0;
    int  answer1(TreeNode* root,int low,int high){
        if(!root){
            return sum;
        }
        answer1(root->left,low,high);
        if(root->val>=low && root->val<=high){
            sum+=(root->val);
        }
        answer1(root->right,low,high);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
      int answer=answer1(root,low,high);
            return answer;
    }
};