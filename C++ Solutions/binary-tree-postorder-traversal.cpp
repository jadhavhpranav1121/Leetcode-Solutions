// https://leetcode.com/problems/binary-tree-postorder-traversal

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;
        if(!root){
return answer;}
        stack<TreeNode*> stack1,stack2;
        stack1.push(root);
        while(!stack1.empty()){
            TreeNode* temp=stack1.top();
            stack2.push(temp);
            stack1.pop();
            if(temp->left!=NULL) stack1.push(temp->left);
            if(temp->right!=NULL) stack1.push(temp->right);
        }
        while(!stack2.empty()){
            answer.push_back(stack2.top()->val);
            stack2.pop();
        }
        return answer;
    }
};