// https://leetcode.com/problems/4sum-ii

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        map<int,int> mpp;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                int sum_ab=nums1[i]+nums2[j];
                mpp[sum_ab]++;
            }
        }
        int ans=0;
        for(int i=0;i<nums3.size();i++){
            for(int j=0;j<nums4.size();j++){
                int sum_cd=nums3[i]+nums4[j];
                int sum_ab=-sum_cd;
                ans+=mpp[sum_ab];
            }
        }
        return ans;
    }
};