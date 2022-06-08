// https://leetcode.com/problems/rotate-array

class Solution {
public:
    void reverse1(vector<int>& nums,int i,int n){
        while(i<n){
            swap(nums[i],nums[n]);
            i++;
            n--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse1(nums,0,nums.size()-1);
        reverse1(nums,0,k-1);
        reverse1(nums,k,nums.size()-1);
    }
};