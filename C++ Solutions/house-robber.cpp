// https://leetcode.com/problems/house-robber

class Solution {
public:
    map<int,int> mpp;
    int rob_com(vector<int>& nums,int n){
        if(n==0){
            return nums[0];
        }
        if(n<0){
            return 0;
        }
        if(mpp.find(n)!=mpp.end()){
            return mpp[n];
        }
        mpp[n]=max(nums[n]+rob_com(nums,n-2),rob_com(nums,n-1));
        return mpp[n];
    }
    int rob(vector<int>& nums) {
        return rob_com(nums,nums.size()-1);
    }
};