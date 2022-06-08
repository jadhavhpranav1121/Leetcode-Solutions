// https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements

class Solution {
public:
    int countElements(vector<int>& nums) {
        int minimum=*min_element(nums.begin(),nums.end());
        int maximum=*max_element(nums.begin(),nums.end());
        int count1=count(nums.begin(),nums.end(),minimum);
        int count2=count(nums.begin(),nums.end(),maximum);
        int answer=(nums.size()-count1-count2);
        return (answer<0?0:answer);
    }
};