// https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal

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
    TreeNode* insert(TreeNode* root,int i){
        if(!root){
            root=new TreeNode(i);
            return root;
        }
        if(root->val<=i){
          root->right=insert(root->right,i);
        }
        else{
            root->left=insert(root->left,i);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       TreeNode* root=NULL;
       for(int i=0;i<preorder.size();i++){
            root=insert(root,preorder[i]);
       }
        return root;
    }
};