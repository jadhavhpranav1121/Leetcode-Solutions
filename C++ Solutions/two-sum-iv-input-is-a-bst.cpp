// https://leetcode.com/problems/two-sum-iv-input-is-a-bst

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
    vector<int> mpp;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        mpp.push_back(root->val);
        inorder(root->right);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root){
            return false;
        }
        if(root->left==NULL and root->right==NULL){
            return false;
        }
        inorder(root);
        int l = 0;
          int r = mpp.size() - 1;
        while (l < r) {
        if (mpp[l] + mpp[r] == k)
            return 1;
        else if (mpp[l] + mpp[r] < k)
            l++;
        else // A[i] + A[j] > sum
            r--;
    }
        return false;
    }
};