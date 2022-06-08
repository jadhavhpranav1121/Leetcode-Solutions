// https://leetcode.com/problems/range-sum-query-2d-immutable

class NumMatrix {
public:
    vector<vector<int>> prefix;
    vector<vector<int>> matrix1;
    NumMatrix(vector<vector<int>>& matrix) {
        prefix=matrix;
        matrix1=matrix;
        prefix[0][0]=matrix[0][0];
        int R=matrix.size();
        int C=matrix[0].size();
	    for (int i=1;i<C;i++)
		    prefix[0][i]=prefix[0][i-1]+matrix[0][i];
	    for (int i=1;i<R;i++)
		    prefix[i][0]=prefix[i-1][0]+matrix[i][0];

    	for (int i=1;i<R;i++) {
	    	for (int j=1;j<C;j++)
		    	prefix[i][j]=prefix[i-1][j]+prefix[i][j-1]-prefix[i-1][j-1]+matrix[i][j];
	    }
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                cout<<prefix[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(row1==0 and col1==0){
            return prefix[row2][col2];
        }
        if(row1==row2 and col1==col2){
            return matrix1[row2][col2];
        } 
        if(row1==0){
            return (prefix[row2][col2]-prefix[row2][col1-1]);
        }
        if(col1==0){
            return (prefix[row2][col2]-prefix[row1-1][col2]);
        }
        return prefix[row2][col2]-(prefix[row1-1][col2]+prefix[row2][col1-1]-prefix[row1-1][col1-1]);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */