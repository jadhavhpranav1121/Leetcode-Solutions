// https://leetcode.com/problems/leaf-similar-trees

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
    void leaves(vector<int> &answer,TreeNode* root){
        if(!root){
            return;
        }
        leaves(answer,root->left);
        if(root->left==NULL and root->right==NULL){
            answer.push_back(root->val);
        }
        leaves(answer,root->right);
    }
    vector<int> findLeaves(TreeNode* root){
        vector<int> answer;
        if(!root){
            return answer;
        }
        leaves(answer,root);
        return answer;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> answer1=findLeaves(root1);
        vector<int> answer2=findLeaves(root2);
        return answer1==answer2;
    }
};