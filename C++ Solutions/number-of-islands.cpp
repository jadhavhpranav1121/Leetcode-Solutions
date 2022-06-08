// https://leetcode.com/problems/number-of-islands

class Solution {
public:
    void mark_visited_value(int i,int j,vector<vector<char>>& grid,int rows,int cols){
        if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]!='1'){
            return;
        }
        grid[i][j]='2';
        mark_visited_value(i+1,j,grid,rows,cols);
        mark_visited_value(i,j+1,grid,rows,cols);
        mark_visited_value(i,j-1,grid,rows,cols);
        mark_visited_value(i-1,j,grid,rows,cols);
    }
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size()==0){
            return 0;
        }
        int rows=grid.size();
        int cols=grid[0].size();
        int no_of_islands=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    mark_visited_value(i,j,grid,rows,cols);
                    no_of_islands++;
                }
            }
        }
        return no_of_islands;
    }

};