// https://leetcode.com/problems/concatenation-of-array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> new1=nums;
        for(auto i:nums){
            new1.push_back(i);
        }
        return new1;
    }
};