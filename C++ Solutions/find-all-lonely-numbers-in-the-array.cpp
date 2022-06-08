// https://leetcode.com/problems/find-all-lonely-numbers-in-the-array

class Solution {
public:
    
    vector<int> findLonely(vector<int>& nums) {
        vector<int> answer(1000002);
        vector<int> answer1;
        for(auto i:nums){
            answer[i]++;
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 and answer[0]==1 and answer[1]==0){
                answer1.push_back(0);
            }
            else if(nums[i]==0){
                continue;
            }
            else if(answer[nums[i]]==1 and answer[nums[i]-1]==0 and answer[nums[i]+1]==0){
                answer1.push_back(nums[i]);
            }
        }
        return answer1;
    }
};