// https://leetcode.com/problems/binary-tree-preorder-traversal

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> answer;
        if(!root){
            return answer;
        }
        stack<TreeNode*> s;
        TreeNode* p=root;
        while(!s.empty() || p!=NULL){
            if(p!=NULL){
                s.push(p);
                answer.push_back(p->val);
                p=p->left;
            }
            else{
                TreeNode* temp=s.top();
                s.pop();
                p=temp->right;
            }
        }
        return answer;
    }
};