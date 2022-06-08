// https://leetcode.com/problems/average-of-levels-in-binary-tree

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
    void printCurrentLevel(TreeNode* root, int level,long long int  &data,int &noOfNodes)
{
    if (root == NULL)
        return;
    if (level == 1){
        data+=(root->val);   
        noOfNodes+=1;
    }
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1,data,noOfNodes);
        printCurrentLevel(root->right, level - 1,data,noOfNodes);
    }
}
    int height(TreeNode* root){
        if(!root){
            return 0;
        }
        return 1+max(height(root->left),height(root->right));
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> new1;
        int h=height(root);
        for(int i=1;i<=h;i++){
            long long int data=0;
            int noOfNodes=0;
            printCurrentLevel(root,i,data,noOfNodes);
            new1.push_back((double)data/noOfNodes);
        }
        return new1;
    }
};