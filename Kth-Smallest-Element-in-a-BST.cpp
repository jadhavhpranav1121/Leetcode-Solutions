class Solution {
public:
    int kthSmallest(TreeNode* root, int &k) {
        if(!root)
            return 0;
       int left=kthSmallest(root->left,k);
       if(left!=0)
           return left;
        k--;
        if(k==0)
            return root->val;
        return kthSmallest(root->right,k);
    }
};
