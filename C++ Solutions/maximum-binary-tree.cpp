// https://leetcode.com/problems/maximum-binary-tree

class Solution {
public:
    int max_index(vector<int>& nums, int l, int r) {
        int max_i=l;
        for (int i=l;i<r;i++) {
            if (nums[max_i]<nums[i])
                max_i=i;
        }
        return max_i;
    }
    TreeNode* construct(vector<int>& nums,int l,int r){
        if(l==r){
            return NULL;
        }
        int max_i=max_index(nums,l,r);
        TreeNode* root=new TreeNode(nums[max_i]);
        root->left=construct(nums,l,max_i);
        root->right=construct(nums,max_i+1,r);
        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       return construct(nums,0,nums.size());
    }
};