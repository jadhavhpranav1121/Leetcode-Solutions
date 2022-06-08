// https://leetcode.com/problems/partition-array-such-that-maximum-difference-is-k

class Solution {
public:
    int ans(vector<int> nums,int l,int r,int k){
        int min1=INT_MAX;
        int max1=INT_MIN;
        for(int i=l;i<=r;i++){
            min1=min(min1,nums[i]);
            max1=max(max1,nums[i]);
        }
        return (abs(min1-max1)<=k);
    }
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int first=nums[0];
        int count=0;
        int n=nums.size();
        int flag=0;
        int min1=INT_MAX;
        int max1=INT_MIN;
        for(int i=0;i<n;i++){
            min1=min(min1,nums[i]);
            max1=max(max1,nums[i]);
            if(abs(min1-max1)>k){
                count++;
                min1=nums[i];
                max1=nums[i];
            }
        }
        // if(flag==0 and n>=3){
        //     return 2;
        // }
        count++;
        return count;
    }
};