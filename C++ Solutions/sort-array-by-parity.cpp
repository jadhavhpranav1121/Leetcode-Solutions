// https://leetcode.com/problems/sort-array-by-parity

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int l=0,r=nums.size()-1;
        while(l<r){
            while(nums[l]%2==0 and l<nums.size()-1){
                l++;
            }
            while(nums[r]%2!=0 and r>0){
                r--;
            }
            if(l<=r){
                swap(nums[l],nums[r]);    
            }
            
        }
        return nums;
    }
};