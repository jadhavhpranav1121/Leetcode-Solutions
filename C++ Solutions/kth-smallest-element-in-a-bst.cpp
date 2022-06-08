// https://leetcode.com/problems/kth-smallest-element-in-a-bst

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
    void inorder(TreeNode* root,set<int> &new1){
        if(root==NULL) return;
        inorder(root->left,new1);
        new1.insert(root->val);
        inorder(root->right,new1);
    }
    int kthSmallest(TreeNode* root, int k) {
        set<int> new1;
        if(k==0){
            return 0;
        }
        inorder(root,new1);
        int answer=0;
        auto it=new1.begin();
        for(int i=1;i<k;i++){
            it++;
        }
        return *it;
    }
};