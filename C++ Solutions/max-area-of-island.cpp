// https://leetcode.com/problems/max-area-of-island

class Solution {
public:
    int answer=0;
    void dfs(int i,int j,vector<vector<int>>& grid,int rows,int cols){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]!=1){
            return;
        }
        grid[i][j]=2;
        answer+=1;
        dfs(i+1,j,grid,rows,cols);
        dfs(i-1,j,grid,rows,cols);
        dfs(i,j-1,grid,rows,cols);
        dfs(i,j+1,grid,rows,cols);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int area=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    dfs(i,j,grid,grid.size(),grid[i].size());
                    if(area<answer){
                        area=answer;
                    }
                    answer=0;
                }
            }
        }
        return area;
    }
};