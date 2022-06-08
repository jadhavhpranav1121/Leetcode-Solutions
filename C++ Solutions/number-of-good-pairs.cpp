// https://leetcode.com/problems/number-of-good-pairs

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> mpp;
        int answer=0;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto i:mpp){
            answer+=(i.second*(i.second-1))/2;
        }
        return answer;
    }
};