// https://leetcode.com/problems/sum-of-all-subset-xor-totals

class Solution {
public:
    int answer1=0;
    void subset(vector<int> nums,int l,vector<int>& ans){
        if(l==nums.size()){
            int answera=0;
            for(auto i:ans){
                answera^=i;
            }
            answer1+=answera;
            return;
        }
        ans.push_back(nums[l]);
        subset(nums,l+1,ans);
        ans.pop_back();
        subset(nums,l+1,ans);
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> answer;
        subset(nums,0,answer);
        return answer1;
    }
};