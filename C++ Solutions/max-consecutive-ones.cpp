// https://leetcode.com/problems/max-consecutive-ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int answer=0;
        int new1=0;
        for(auto i:nums){
            if(i==0) new1=0;
if(i==1) new1++;
            answer=max(new1,answer);
        }
        return answer;
    }
};