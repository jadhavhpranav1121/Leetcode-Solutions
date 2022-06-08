// https://leetcode.com/problems/find-all-k-distant-indices-in-an-array

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        map<int,vector<int>> mpp;
        set<int> answer;
        for(auto i=0;i<nums.size();i++){
            if(nums[i]==key){
                mpp[key].push_back(i);
            }
        }
        for(auto i=0;i<nums.size();i++){
            for(auto j:mpp[key]){
                if(abs(i-j)<=k){
                    answer.insert(i);
                }
            }
        }
        vector<int> ans;
        for(auto i:answer){
            ans.push_back(i);
        }
        return ans;
    }
};