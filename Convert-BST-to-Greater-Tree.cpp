class Solution {
public:
    void postorder(TreeNode* root,int &answer){
        if(!root) return;
        postorder(root->right,answer);
        root->val=root->val+answer;
        answer=root->val;
        postorder(root->left,answer);
    }
    TreeNode* convertBST(TreeNode* root) {
         if(!root){
            return NULL;
        }
        int answer=0;
        postorder(root,answer);
        return root;
    }
};
