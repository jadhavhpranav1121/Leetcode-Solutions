// https://leetcode.com/problems/contiguous-array

class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mpp;
        int prefixsum=0;
        mpp.insert({0,-1});
        int maxlen=0;
        for(int i=0;i<nums.size();i++){
            prefixsum+=(nums[i]==0?-1:1);
            if(mpp.find(prefixsum)!=mpp.end()){
                if(maxlen<i-mpp[prefixsum]){
                    maxlen=i-mpp[prefixsum];
                }
            }
            else{
                mpp[prefixsum]=i;
            }
        }
        return maxlen;
    }
};