// https://leetcode.com/problems/maximum-difference-between-node-and-ancestor

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
    void dfs(TreeNode* root,int val,int &max_value){
        if(!root) return;
        // cout<<root->val<<" "<<val<<endl;
        if(abs(val-root->val)>max_value){
            max_value=abs(val-root->val);
        }
        // cout<<max_value<<" ";
        dfs(root->left,val,max_value);
        dfs(root->right,val,max_value);
    }
    int maxValue(TreeNode* root){
        if(!root) return 0;
        int max_value=INT_MIN;
        if(root->left) dfs(root->left,root->val,max_value);
        if(root->right) dfs(root->right,root->val,max_value);
        return max(maxValue(root->right),max(max_value,maxValue(root->left)));
    }
    int maxAncestorDiff(TreeNode* root) {
        return maxValue(root);
    }
};