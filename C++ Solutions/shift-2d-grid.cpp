// https://leetcode.com/problems/shift-2d-grid

class Solution {
public:
    void rotatelist(vector<int>& new1,int k){
        reverse(new1.begin(),new1.begin()+(new1.size()-k));
        reverse(new1.begin(),new1.end());
        reverse(new1.begin(),new1.begin()+k);
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int e) {
        
        vector<int> new1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                new1.push_back(grid[i][j]);
            }
        }
        e=e%new1.size();
        rotatelist(new1,e);
        int k=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                grid[i][j]=new1[k];
                k++;
            }
        }
        return grid;
    }
};