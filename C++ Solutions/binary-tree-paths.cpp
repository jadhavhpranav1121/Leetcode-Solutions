// https://leetcode.com/problems/binary-tree-paths

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
    void dfs(TreeNode* root,string p_string,vector<string> &solutions){
        p_string+="->"+to_string(root->val);
        if(root->left==NULL and root->right==NULL){
            solutions.push_back(p_string);
            return;
        }
        if(root->left) dfs(root->left,p_string,solutions);
        if(root->right) dfs(root->right,p_string,solutions);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> solutions;
        if(!root) return solutions;
        string p_string=to_string(root->val);
        if(root->left==NULL and root->right==NULL) solutions.push_back(p_string);
        if(root->left!=NULL) dfs(root->left,p_string,solutions);
        if(root->right!=NULL) dfs(root->right,p_string,solutions);
        return solutions;
    }
};