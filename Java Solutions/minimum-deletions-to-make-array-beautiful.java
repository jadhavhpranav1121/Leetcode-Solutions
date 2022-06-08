// https://leetcode.com/problems/minimum-deletions-to-make-array-beautiful

class Solution {
    public int minDeletion(int[] nums) {
        int n=nums.length,cnt=0;
        for(int i=0;i<n-1;i++){
            if((i-cnt)%2==0 && nums[i]==nums[i+1]){
                cnt++;
            }
        }
        if((n-cnt)%2==1){
            cnt++;
        }
        return cnt;
    }
}