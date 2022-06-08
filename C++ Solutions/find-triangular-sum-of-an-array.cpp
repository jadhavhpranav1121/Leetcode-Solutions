// https://leetcode.com/problems/find-triangular-sum-of-an-array

class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<vector<int>> v(nums.size(),vector<int>(nums.size(),0));
        v[0]=nums;
        int j=1;
        int ans=0;
        if(nums.size()==1){
            ans=nums[0];
        }
        for(int i=1;i<nums.size();i++){
            for(int k=0;k<nums.size()-1;k++){
                v[i][k]=(v[i-1][k]+v[i-1][k+1])%10;
            }
            ans=v[i][0];
        }
        return ans;
    }
};
// 