// https://leetcode.com/problems/next-permutation

class Solution {
    public void swap(int[] A,int i,int j){
        int tmp=A[i];
        A[i]=A[j];
        A[j]=tmp;
    }
    public void reverse(int[] A,int i,int j){
        while(i<j) swap(A,i++,j--);
    }
    public void nextPermutation(int[] nums) {
        if(nums==null || nums.length<=1) return;
        int size1=nums.length;
        int i,r;
        for(i=size1-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                break;
            }
        }
        if(i<0) {
            reverse(nums,0,size1-1);
        }
        else{
            
        
        for(r=size1-1;r>i;r--){
            if(nums[r]>nums[i]){
                break;
            }
        }
        swap(nums,i,r);
        reverse(nums,i+1,size1-1);
            }
    }
}