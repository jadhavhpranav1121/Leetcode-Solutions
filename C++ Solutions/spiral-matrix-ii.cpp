// https://leetcode.com/problems/spiral-matrix-ii

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<pair<int,int>> directionV{{0,1},{1,0},{0,-1},{-1,0}};
        vector<vector<int>> matrix(n,vector<int>(n,0));
        vector<vector<bool>> seen(n,vector<bool>(n,false));
        int index=0;
        int r=0,c=0;
        for(int i=0;i<n*n;i++){
            matrix[r][c]=i+1;
            seen[r][c]=true;
            int cr=r+directionV[index].first;
            int cc=c+directionV[index].second;
            if(0<=cr and cr<n and 0<=cc and cc<n and !seen[cr][cc]){
                r=cr;
                c=cc;
            }
            else{
                index=(index+1)%4;
                r+=directionV[index].first;
                c+=directionV[index].second;
            }
        }
        return matrix;
    }
};