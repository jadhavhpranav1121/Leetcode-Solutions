// https://leetcode.com/problems/number-of-provinces

class Solution {
public:
     void dfs(vector<vector<int>>& isConnected, vector<int>& vis, int v){
        vis[v] = 1;
        for(int i=0; i<vis.size(); i++){
            if(isConnected[v][i] && !vis[i]){
                dfs(isConnected, vis, i);
            }
        }
    }
     int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n, 0);
        int cnt = 0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                cnt++;
                dfs(isConnected, vis, i);
            }
        }
        return cnt;
    }
    
   
};