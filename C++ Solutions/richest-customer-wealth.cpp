// https://leetcode.com/problems/richest-customer-wealth

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maximum=0;
        for(int i=0;i<accounts.size();i++){
            maximum=max(accumulate(accounts[i].begin(),accounts[i].end(),0),maximum);
        }
        return maximum;
    }
};