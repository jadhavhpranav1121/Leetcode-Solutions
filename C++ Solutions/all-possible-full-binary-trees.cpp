// https://leetcode.com/problems/all-possible-full-binary-trees

class Solution {
public:
    vector<vector<TreeNode*>>dp;
    vector<TreeNode*> solve(int n){
        if(n==1) return {new TreeNode(0)};
        if(dp[n].size()) return dp[n];
        vector<TreeNode*>ans;
		for(int i=1;i<n;i+=2){
            vector<TreeNode*>left=solve(i); 
            vector<TreeNode*>rit=solve(n-i-1);
            for(int j=0;j<left.size();j++){
                for(int k=0;k<rit.size();k++){
                    TreeNode*root=new TreeNode(0);
                    root->left=left[j]; 
                    root->right=rit[k]; 
                    ans.push_back(root);
                }
            }
        }
        return dp[n]=ans;
    }
    vector<TreeNode*> allPossibleFBT(int n) {
        dp=vector<vector<TreeNode*>>(n+1);
        return solve(n);
    }
};
