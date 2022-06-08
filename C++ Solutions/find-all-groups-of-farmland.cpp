// https://leetcode.com/problems/find-all-groups-of-farmland

class Solution {
public:
    int r=-1;
    int s=-1;
     void mark_visited_value(int i,int j,vector<vector<int>>& grid,int rows,int cols,vector<int> &new1){
         if(i<0 || i>=rows || j<0 || j>=cols || grid[i][j]!=1){
            return;
        }
        grid[i][j]=2;
          if(r<i){
                r=i;
            }
            if(s<j){
                s=j;
            }
        mark_visited_value(i+1,j,grid,rows,cols,new1);
        mark_visited_value(i,j+1,grid,rows,cols,new1);
        mark_visited_value(i,j-1,grid,rows,cols,new1);
        mark_visited_value(i-1,j,grid,rows,cols,new1);
         
    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
       vector<vector<int>> res;
        if(land.size()==0){
            return res;
        }
        
        int rows=land.size();
        int cols=land[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(land[i][j]==1){
                    vector<int> new1;
                    new1.push_back(i);
                    new1.push_back(j);
                    mark_visited_value(i,j,land,rows,cols,new1);
                    new1.push_back(r);
                    new1.push_back(s);
                    r=-1;
                    s=-1;
                    res.push_back(new1);
                    new1.clear();
                }
            }
        }
        return res;
    }
};