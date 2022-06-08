// https://leetcode.com/problems/battleships-in-a-board

class Solution {
public:
    void mark_visited_value(int i,int j,vector<vector<char>>& board,int rows,int cols){
        if(i<0 || i>=rows || j<0 || j>=cols || board[i][j]!='X'){
            return;
        }
        board[i][j]='Y';
        mark_visited_value(i+1,j,board,rows,cols);
        mark_visited_value(i-1,j,board,rows,cols);
        mark_visited_value(i,j+1,board,rows,cols);
        mark_visited_value(i,j-1,board,rows,cols);
    }
    int countBattleships(vector<vector<char>>& board) {
        if(board.size()==0){
            return 0;
        }
        int rows=board.size();
        int cols=board[0].size();
        int no_of_boards=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(board[i][j]=='X'){
                    mark_visited_value(i,j,board,rows,cols);
                    no_of_boards++;
                }
            }
        }
        return no_of_boards;
    }
};