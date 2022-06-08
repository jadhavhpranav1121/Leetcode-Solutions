// https://leetcode.com/problems/subsets

class Solution {
public:
    void subset1(vector<int> v,vector<vector<int>>& sol,vector<int>& nums,int i,int n){
        if(i==n){
            sol.push_back(v);
            return;
        }
        subset1(v,sol,nums,i+1,n);
        v.push_back(nums[i]);
        subset1(v,sol,nums,i+1,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> v;
        subset1(v,ans,nums,0,nums.size());
        return ans;
    }
};