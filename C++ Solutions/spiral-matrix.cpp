// https://leetcode.com/problems/spiral-matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int k=0,l=0,m=matrix.size(),n=matrix[0].size();
        while(k<m and l<n){
            for(int i=l;i<n;i++){
                ans.push_back(matrix[k][i]);
                cout<<matrix[k][i]<<" ";
            }  
            k++;
            for(int i=k;i<m;i++){
                ans.push_back(matrix[i][n-1]);
            }
            n--;
            if(k<m){
                for(int i=n-1;i>=l;i--){
                    ans.push_back(matrix[m-1][i]);
                }
                m--;
            }
            if(l<n){
                for(int i=m-1;i>=k;i--){
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};