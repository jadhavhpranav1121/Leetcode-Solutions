// https://leetcode.com/problems/cousins-in-binary-tree

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
   
    int findCousinHeight(TreeNode* root,int levels,int x,TreeNode** prev){
        if(!root) return 0;
        
        if(root->val==x){
            return levels;
        }
        (*prev)=root;
        int left=findCousinHeight(root->left,levels+1,x,prev);
        if(left){
            cout<<(*prev)->val<<endl;
            return left;
        }
        (*prev)=root;
        int right=findCousinHeight(root->right,levels+1,x,prev);
        return right;
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root->val==x || root->val==y){
            return false;
        }
         TreeNode* prev1=NULL;TreeNode* prev2=NULL;
        bool sameheight=findCousinHeight(root,0,x,&prev1)==findCousinHeight(root,0,y,&prev2);
        bool sameroot=(prev1==prev2);
        cout<<prev1->val<<" "<<prev2->val;
        if(!sameroot and sameheight){
            return true;
        }
        else{
            return false;
        }
    }
};