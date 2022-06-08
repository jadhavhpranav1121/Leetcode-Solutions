// https://leetcode.com/problems/top-k-frequent-elements

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>> pq;
        vector<int> nw1;
        if(nums.size()==0) return nw1;
        map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
    // while(!pq.empty()){
        for(int i=0;i<k;i++){
            pair<int,int> new1=pq.top();
            pq.pop();
            // cout<<new1.first<<" "<<new1.second<<endl;
            nw1.push_back(new1.second);
        }
        // }
        return nw1;
    }
    
};