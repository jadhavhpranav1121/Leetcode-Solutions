// https://leetcode.com/problems/xor-queries-of-a-subarray

class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        vector<int> prefix(arr.size()+1);
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]^arr[i];
        }
        vector<int> ans(q.size());
        for(int i=0;i<q.size();i++){
            int l=q[i][0];
            int r=q[i][1];
            if(l==0) ans[i]=prefix[r];
            else ans[i]=prefix[r]^prefix[l-1];
        }
        return ans;
    }
};