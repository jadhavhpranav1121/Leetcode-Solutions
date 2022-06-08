// https://leetcode.com/problems/find-mode-in-binary-search-tree

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
    map<int,int> mpp;
    void inorder(TreeNode* root,vector<int> &new1){
        if(!root){
            return;
        }
        if(root->left) inorder(root->left,new1);
        mpp[root->val]++;
        if(root->right) inorder(root->right,new1);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> new1;
        if(root->left==NULL and root->right==NULL){
            new1.push_back(root->val);
            return new1;
        }
        inorder(root,new1);
        int mostFreq=INT_MIN;
        for(auto i:mpp){
            if(mostFreq<i.second){
                mostFreq=i.second;
            }
        }
        cout<<mostFreq;
        for(auto i:mpp){
            if(i.second==mostFreq){
                new1.push_back(i.first);
            }
        }
        return new1;
    }
};