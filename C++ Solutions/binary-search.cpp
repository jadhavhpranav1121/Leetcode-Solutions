// https://leetcode.com/problems/binary-search


class Solution {
public:
    int answer(vector<int>& nums,int target,int start,int end){
        if(start>end){
            return -1;
        }
        int mid=(start+end)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            return answer(nums,target,start,mid-1);
        }
        else if(nums[mid]<target){
return answer(nums,target,mid+1,end);
        }
        return -1;
    }    
    int search(vector<int>& nums, int target) {
        return answer(nums,target,0,nums.size());
    }
};