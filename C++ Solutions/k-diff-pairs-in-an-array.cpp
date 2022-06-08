// https://leetcode.com/problems/k-diff-pairs-in-an-array

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
       map<int,int> mpp;
        set<pair<int,int>> s;
        for(auto i:nums){
            if(mpp.find(i+k)!=mpp.end()){
                s.insert({min(i+k,i),max(i+k,i)});
            }
            if(mpp.find(i-k)!=mpp.end()){
                s.insert({min(i-k,i),max(i-k,i)});
            }
            mpp[i]++;
        }
        return s.size();
    }
};