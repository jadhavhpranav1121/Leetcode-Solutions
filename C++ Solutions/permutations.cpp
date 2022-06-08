// https://leetcode.com/problems/permutations

class Solution {
public:
    void permuteUtil(int l,int r,vector<int>& nums,vector<int>& solution,vector<vector<int>>& answer){
        if(l==r){
            answer.push_back(solution);
            return;
        }
        for(int i=l;i<r;i++){
            swap(nums[l],nums[i]);
            solution.push_back(nums[l]);
            permuteUtil(l+1,r,nums,solution,answer);
            swap(nums[l],nums[i]);
            solution.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> answer;
        vector<int> solution;
        permuteUtil(0,nums.size(),nums,solution,answer);
        return answer;
    }
};