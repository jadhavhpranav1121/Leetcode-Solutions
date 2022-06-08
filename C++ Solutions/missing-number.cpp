// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int answer=0,answer1=0;
        int n=nums.size();
        for(int i=0;i<=n;i++){
            answer1=answer1^i;
        }
        for(auto i:nums){
            answer=answer^i;
        }
        return answer^answer1;
    }
};