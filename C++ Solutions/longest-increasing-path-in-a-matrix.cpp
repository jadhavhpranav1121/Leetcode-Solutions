// https://leetcode.com/problems/longest-increasing-path-in-a-matrix

class Solution {
private:
    vector<vector<int>>mem;
    vector<pair<int,int>>dirs={{0,1},{0,-1},{1,0},{-1,0}};
    int solve(vector<vector<int>>&matrix,int r,int c){
        int m=matrix.size(),n=matrix[0].size();
        if(mem[r][c]!=-1){
            return mem[r][c];
        } else {
            int ans=1;
            for(int i=0;i<dirs.size();i++){
                int nr=r+dirs[i].first;
                int nc=c+dirs[i].second;
                if(nr>=0 and nc>=0 and nr<m and nc<n and matrix[nr][nc]>matrix[r][c]){
                    ans=max(ans,1+solve(matrix,nr,nc));
                }
            }
            return mem[r][c]=ans;
        }
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        mem=vector<vector<int>>(m,vector<int>(n,-1));
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mem[i][j]==-1){
                    ans=max(ans,solve(matrix,i,j));
                } else {
                    ans=max(ans,mem[i][j]);
                }
            }
        }
        return ans;
    }
};