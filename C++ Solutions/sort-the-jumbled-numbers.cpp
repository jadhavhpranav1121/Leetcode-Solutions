// https://leetcode.com/problems/sort-the-jumbled-numbers

class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        map<int,vector<int>> mpp;
        for(auto i:nums){
            string s=to_string(i);
            string s1="";
            for(auto j:s){
                s1.push_back(mapping[j-'0']+'0');
            }
            mpp[stoi(s1)].push_back(i);
        }
        vector<int> answer;
        for(auto i:mpp){
            for(auto j:i.second){
                answer.push_back(j);    
            }            
        }
        return answer;
    }
};