// https://leetcode.com/problems/find-bottom-left-tree-value

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
    void bfs(TreeNode* root,int height1,int &answer,int level=0){
        if(!root) return;
        queue<TreeNode*> new1;
        new1.push(root);
        while(!new1.empty()){
            if(level+1==height1){
                answer=new1.front()->val;
                return;
            }
            else{
                int size=new1.size();
                for(int i=0;i<size;i++){
                    TreeNode* temp=new1.front();
                    new1.pop();
                    if(temp->left) new1.push(temp->left);
                    if(temp->right) new1.push(temp->right);
                }
                level++;
            }
        }
    }
    int height(TreeNode* root){
        if(!root) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int findBottomLeftValue(TreeNode* root) {
        int height1=height(root);
        int answer=0;
        bfs(root,height1,answer);
        return answer;
    }
};