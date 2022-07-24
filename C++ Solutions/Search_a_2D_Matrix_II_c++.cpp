class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        
        int row=0,col=n-1;
        while(row<m && col<n && row>=0 && col>=0){
            if(target>matrix[row][col]) {
                row++;
            }
            else if(target<matrix[row][col]){
                col--;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
