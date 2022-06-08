// https://leetcode.com/problems/sum-root-to-leaf-numbers

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
    int to_int1(string answer,int i=0){
        if(answer.size()==0){
            return 0;
        }
        return ((answer[answer.size()-1]-'0')*pow(10,i))+to_int1(answer.substr(0,answer.size()-1),i+1);
    }
    int number=0;
    void dfs(TreeNode* root,string answer){
        if(!root) return;
        if(root->left==NULL and root->right==NULL){
            answer=answer+to_string(root->val);
            number+=to_int1(answer);
            cout<<answer<<" ";
        }
        answer=answer+to_string(root->val);
        dfs(root->left,answer);
        dfs(root->right,answer);
    }
    int sumNumbers(TreeNode* root) {
        dfs(root,"");
        return number;
    }
};