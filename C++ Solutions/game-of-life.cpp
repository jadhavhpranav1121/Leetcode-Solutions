// https://leetcode.com/problems/game-of-life

class Solution {
public:
    void changeValue(vector<vector<int>>& board,vector<vector<int>> bo,int i,int j,int size1,int size2){
        int count0=0;
        int count1=0;
         int a,b;
        if(i-1>=0 and j-1>=0){
            a=i-1;
            b=j-1;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(i+1<size1 and j+1<size2){
             a=i+1;
            b=j+1;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(i-1>=0 and j+1<size2){
             a=i-1;
            b=j+1;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(i+1<size1 and j-1>=0){
             a=i+1;
            b=j-1;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(i+1<size1 and j>=0 and j<size2){
             a=i+1;
            b=j;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(i-1>=0 and j>=0 and j<size2){
             a=i-1;
            b=j;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(i<size1 and i>=0 and j+1<size2){
             a=i;
            b=j+1;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(i<size1 and i>=0 and j-1>=0){
             a=i;
            b=j-1;
            if(bo[a][b]==0){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(bo[i][j]==1 and count1<2){
            board[i][j]=0;
        }
        if(bo[i][j]==1 and count1>3){
            board[i][j]=0;
        }
        if(bo[i][j]==0 and count1==3){
            board[i][j]=1;
        }   
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>> bo=board;
        int size1=board.size();
        int size2=board[0].size();
        for(int i=0;i<size1;i++){
            for(int j=0;j<size2;j++){
                changeValue(board,bo,i,j,board.size(),board[i].size());
            }
        }
    }
};