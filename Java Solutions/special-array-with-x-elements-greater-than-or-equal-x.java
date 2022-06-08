// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x

class Solution {
    public int com(int[] nums,int mid){
        int count=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>=mid){
                count++;
            }
        }
        return count;
    }
    public int specialArray(int[] nums) {
        int l=0,r=1000;
        while(l<=r){
            int mid=l+(r-l)/2;
            int comp=com(nums,mid);
            if(comp==mid){
                return comp;
            }
            else if(comp<mid){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return -1;
    }
}