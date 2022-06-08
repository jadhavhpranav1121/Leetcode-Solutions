// https://leetcode.com/problems/count-servers-that-communicate

class Solution {
public:
    void dfs(vector<vector<int>> &grid,int i,int j,int& count){
        if(grid[i][j]==1){
            count+=1;
            grid[i][j]=0;
            for(int k=0;k<grid.size();k++){
                if(grid[k][j]==1) dfs(grid,k,j,count);
            }
            for(int k=0;k<grid[0].size();k++){
                if(grid[i][k]==1) dfs(grid,i,k,count);
            }
        }
    }
    int countServers(vector<vector<int>>& grid) {
         int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    int count=0;
                    dfs(grid,i,j,count);
                    if(count>1) ans+=count;
                }
            }
        }
        return ans;
    }
};