// https://leetcode.com/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        int n=nums.size();
        while(l<=r){
            int mid=l+(r-l)/2;  
            if(nums[mid]==target){
                    return mid;
            }
            if(mid>=0 and mid+1<n){
             if(nums[mid]<target and nums[mid+1]>target){
                    return mid+1;
                }
            }
            if(nums[mid]>target){
                r=mid-1;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }   
        }
        return (target>nums[0]?n:0);
    }
};