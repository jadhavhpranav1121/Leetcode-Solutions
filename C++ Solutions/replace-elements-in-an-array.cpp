// https://leetcode.com/problems/replace-elements-in-an-array

class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]=i+1;
        }
        for(auto i:operations){
            if(mpp[i[0]]>0){
                mpp[i[1]]=mpp[i[0]];
                mpp.erase(i[0]);
            }
        }
        for(auto i:mpp){
            nums[i.second-1]=i.first;
        }
        return nums;
    }
};