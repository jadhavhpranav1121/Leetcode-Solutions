// https://leetcode.com/problems/maximum-xor-for-each-query

class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        for(int i=0;i<nums.size()-1;i++){
            nums[i+1]=nums[i+1]^nums[i];
        }
        vector<int> newone;
        int maximum_number=(1<<maximumBit)-1;
        int size_of_nums=nums.size();
        for(int i=0;i<size_of_nums;i++){
            newone.push_back(nums[size_of_nums-i-1]^maximum_number);
        }
        return newone;
    }
};