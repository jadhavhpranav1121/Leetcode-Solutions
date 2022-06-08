// https://leetcode.com/problems/construct-string-from-binary-tree

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
     string tree2str(TreeNode* t) {
       if(!t) return "";
        string answer=to_string(t->val);
        if(t->left || t->right){
            answer+="("+tree2str(t->left)+")";
            if(t->right) answer+="("+tree2str(t->right)+")";
        }
         return answer;
    }
};