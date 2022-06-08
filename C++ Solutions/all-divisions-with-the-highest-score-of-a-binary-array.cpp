// https://leetcode.com/problems/all-divisions-with-the-highest-score-of-a-binary-array

class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        map<int,vector<int>> answer;
        int countOfZ=0,countOfOne=0;
        countOfOne=count(nums.begin(), nums.end(), 1);
        answer[countOfOne+countOfZ].push_back(0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                countOfZ++;
            }
            else{
                countOfOne--;
                if(countOfOne<=0){
                    countOfOne=0;
                }
            }
            answer[countOfZ+countOfOne].push_back(i+1);
        }
        vector<int> v;
        for(auto i:answer){
            v=i.second;
        }
        
        return v;
    }
};