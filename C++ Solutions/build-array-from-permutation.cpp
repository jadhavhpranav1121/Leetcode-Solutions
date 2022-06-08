// https://leetcode.com/problems/build-array-from-permutation

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> new1(nums.size());
        for(int i=0;i<nums.size();i++){
            new1[i]=nums[nums[i]];
        }
        return new1;
    }

};