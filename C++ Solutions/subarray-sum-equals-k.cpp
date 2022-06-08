// https://leetcode.com/problems/subarray-sum-equals-k

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> mpp;
        mpp.insert({0,1});
        int sum1=0,count1=0;
        for(auto i:nums){
            sum1+=i;
            if(mpp.find(sum1-k)!=mpp.end()){
                count1+=mpp[sum1-k];
            }
            mpp[sum1]++;
        }
        return count1;
    }
};