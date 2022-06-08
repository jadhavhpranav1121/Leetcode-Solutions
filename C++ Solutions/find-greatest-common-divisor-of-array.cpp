// https://leetcode.com/problems/find-greatest-common-divisor-of-array

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int greaterint=*max_element(nums.begin(),nums.end());
        int smallerint=*min_element(nums.begin(),nums.end());
        return __gcd(greaterint,smallerint);
    }
};