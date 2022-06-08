// https://leetcode.com/problems/number-of-closed-islands

class Solution {
public:
    void mark_visited_value(int r,int c,int i,int j,vector<vector<int>>& grid,int rows,int cols){
        if(i<r || i>=rows || j<c || j>=cols || grid[i][j]!=0){
            return;
        }
        grid[i][j]=2;
        mark_visited_value(r,c,i+1,j,grid,rows,cols);
        mark_visited_value(r,c,i,j+1,grid,rows,cols);
        mark_visited_value(r,c,i,j-1,grid,rows,cols);
        mark_visited_value(r,c,i-1,j,grid,rows,cols);
    }
    int closedIsland(vector<vector<int>>& grid)  {
        if(grid.size()==0){
            return 0;
        }
        int rows=grid.size();
        int cols=grid[0].size();
        int no_of_islands=0;
        
        for(int i=0;i<rows;i++){
           if(grid[i][0]==0) mark_visited_value(0,0,i,0,grid,rows,cols);
        }
        
        for(int i=0;i<rows;i++){
            if(grid[i][cols-1]==0) mark_visited_value(0,0,i,cols-1,grid,rows,cols);
        }
        
        for(int i=0;i<cols;i++){
           if(grid[0][i]==0)  mark_visited_value(0,0,0,i,grid,rows,cols);
        }
        
          for(int i=0;i<cols;i++){
              if(grid[rows-1][i]==0) 
            mark_visited_value(0,0,rows-1,i,grid,rows,cols);
        }
        
        for(int i=1;i<rows-1;i++){
            for(int j=1;j<cols-1;j++){
                if(grid[i][j]==0){
                    mark_visited_value(1,1,i,j,grid,rows-1,cols-1);
                    ++no_of_islands;
                }
            }
        }
        return no_of_islands;
    }
};