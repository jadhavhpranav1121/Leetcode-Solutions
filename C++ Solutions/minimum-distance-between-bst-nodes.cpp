// https://leetcode.com/problems/minimum-distance-between-bst-nodes

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
    void inorder(TreeNode* root,vector<int> &answer){
        if(!root){
            return;
        }
        inorder(root->left,answer);
        answer.push_back(root->val);
        inorder(root->right,answer);
    }
    int minDiffInBST(TreeNode* root) {
       vector<int> answer;
        inorder(root,answer);
        int answer1=INT_MAX;
        for(int i=0;i<answer.size()-1;i++){
            answer1=min(answer1,answer[i+1]-answer[i]);
        }
        return answer1;
    }
};