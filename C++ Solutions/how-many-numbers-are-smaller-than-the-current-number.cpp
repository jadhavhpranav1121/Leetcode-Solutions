// https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> answer=nums;
        vector<int> answer1;
        sort(answer.begin(),answer.end());
        for(int i=0;i<nums.size();i++){
            auto it=find(answer.begin(),answer.end(),nums[i]);
            answer1.push_back(it-answer.begin());
        }
        return answer1;
    }
};