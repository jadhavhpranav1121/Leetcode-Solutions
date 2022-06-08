// https://leetcode.com/problems/number-of-enclaves

class Solution {
public:
    void dfs(vector<vector<int>>& grid,int i,int j,int len1,int len2){
        if(i<0 || j<0 || i>=len1 || j>=len2 || grid[i][j]!=1) return;
        if(grid[i][j]==1){
        grid[i][j]=2;}
        dfs(grid,i+1,j,len1,len2);
        dfs(grid,i-1,j,len1,len2);
        dfs(grid,i,j+1,len1,len2);
        dfs(grid,i,j-1,len1,len2);
    }
    int numEnclaves(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int len1=grid.size();
        int len2=grid[0].size();
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(i==0 || i==len1-1){
                    if(grid[i][j]==1) dfs(grid,i,j,len1,len2);
                }
                if(j==0 || j==len2-1){
                    if(grid[i][j]==1) dfs(grid,i,j,len1,len2);
                }
            }
       }
        int count1=0;
   for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                // cout<<grid[i][j]<<" ";
                if(grid[i][j]==1){
                    count1++;
                }
            }}
        return count1;
    }
};