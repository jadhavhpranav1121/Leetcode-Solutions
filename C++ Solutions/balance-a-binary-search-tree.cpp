// https://leetcode.com/problems/balance-a-binary-search-tree

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
    TreeNode* root1;
    void inorder(TreeNode* root,vector<TreeNode*> &sortedArray){
        if(!root){return;}
        inorder(root->left,sortedArray);
        sortedArray.push_back(root);
        inorder(root->right,sortedArray);
    }
    TreeNode* buildTree(vector<TreeNode*> inorder,int start,int end)
    {
        if(start>end)
            return NULL;
        int mid=(start+end)/2;
        TreeNode* root=inorder[mid];
        root->left=buildTree(inorder,start,mid-1);
        root->right=buildTree(inorder,mid+1,end);
        return root;
    }
    TreeNode* balanceBST(TreeNode* root) {
        if(!root){
            return NULL;
        }
        vector<TreeNode*> sortedArray;
        inorder(root,sortedArray);
        return buildTree(sortedArray,0,sortedArray.size()-1);
    }
};