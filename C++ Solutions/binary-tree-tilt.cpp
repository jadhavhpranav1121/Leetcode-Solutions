// https://leetcode.com/problems/binary-tree-tilt

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
    int sum(TreeNode* root){
        if(!root){
            return 0;   
        }
        return root->val+(sum(root->left)+sum(root->right));
    }
    void answer1(TreeNode* root,int &answer){
        if(!root){
            return;
        }
        answer1(root->left,answer);
        answer+=abs(sum(root->left)-sum(root->right));
        answer1(root->right,answer);
        // if(root->left==NULL and root->right==NULL) root->val=0;
        // else if(root->left!=NULL and root->right!=NULL) root->val=abs(root->left->val-root->right->val);
        //  else if(root->left!=NULL and root->right==NULL) root->val=abs(root->left->val);
        //  else if(root->left==NULL and root->right!=NULL) root->val=abs(root->right->val);
        
        
    }
    // void print(TreeNode* root){
    //     if(!root){
    //         return;
    //     }
    //     print(root->left);
    //     cout<<root->val<<" ";
    //     print(root->right);
    // }
    int findTilt(TreeNode* root) {
        int answer=0;
        answer1(root,answer);
        return answer;
    }
};