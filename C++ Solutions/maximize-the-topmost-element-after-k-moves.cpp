// https://leetcode.com/problems/maximize-the-topmost-element-after-k-moves

class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        if(nums.size()==1 and k%2) return -1;
        if(k==1) return nums[1];
        int ans=0;
        if(k>nums.size()){
            for(int i=0;i<nums.size();i++) ans=max(ans,nums[i]);
            return ans;
        }
        else if(k==nums.size()){
            for(int i=0;i<k-1;i++){
                ans=max(ans,nums[i]);
            }
            return ans;
        }
        else{
            for(int i=0;i<k-1;i++){
                ans=max(ans,nums[i]);
                
            }
            return max(ans,nums[k]);
        }
        return -1;
    }
};