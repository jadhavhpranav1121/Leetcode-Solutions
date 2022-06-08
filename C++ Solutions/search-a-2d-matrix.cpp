// https://leetcode.com/problems/search-a-2d-matrix

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0;
        for(i=0;i<matrix.size();i++){
           if(target<matrix[i][0])
               break;
        }
        i--;
        if(i==-1){
            i++;
        }
        for(int j=0;j<matrix[i].size();j++){
            if(target==matrix[i][j])
                return true;
        }
        return false;
    }
};