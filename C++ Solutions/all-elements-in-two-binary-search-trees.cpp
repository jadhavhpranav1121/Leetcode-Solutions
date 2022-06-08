// https://leetcode.com/problems/all-elements-in-two-binary-search-trees

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
    void inorder(TreeNode* root,vector<int> &main1){
        if(!root){
            return;
        }
        inorder(root->left,main1);
        main1.push_back(root->val);
        inorder(root->right,main1);
    }
    // void inorder1(TreeNode* root,vector<int> &main1,vector<int> &main2,int count=0){
    //     if(!root || count==main2.size()) return;
    //     inorder1(root->left,main1,main2,count);
    //     cout<<count<<" ";
    //     if(main2[count]<root->val){
    //         main1.push_back(main2[count]);
    //         main1.push_back(root->val);
    //     }
    //     else if(main2[count]>=root->val){
    //         main1.push_back(root->val);
    //         main1.push_back(main2[count]);
    //     }
    //     count++;
    //     inorder1(root->right,main1,main2,count);
    // }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
         vector<int> main1;
        // if(!root1 and !root2){
        //     return main1;
        // }
        // else if(!root1 and root2){
        //     inorder(root2,main1);
        //     return main1;
        // }
        // else if(root1 and !root2){
        //     inorder(root1,main1);
        //     return main1;
        // }
        // else{
            inorder(root1,main1);
            inorder(root2,main1);
            sort(main1.begin(),main1.end());
            return main1;
        // }
    }
};