// https://leetcode.com/problems/sort-an-array

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> answer;
        if(nums.size()==0) return answer;
        for(auto i:nums){
            pq.push(i);
        }
        while(!pq.empty()){
            answer.push_back(pq.top());
            pq.pop();
        }
        return answer;
    }
};