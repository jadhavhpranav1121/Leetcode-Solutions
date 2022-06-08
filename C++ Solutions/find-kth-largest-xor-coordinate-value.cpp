// https://leetcode.com/problems/find-kth-largest-xor-coordinate-value

class Solution {
public:
    int kthLargestValue(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        priority_queue<int,vector<int>> pq;
        
        for(int i=0;i<m;i++){
            for(int j=1;j<n;j++){
                mat[i][j] ^= mat[i][j-1];         
            }
        }
        
        for(int i=0;i<n;i++){
            pq.push(mat[0][i]);
        }
        
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                mat[j][i] ^= mat[j-1][i];
                pq.push(mat[j][i]);
            }
        }
		
        k = k-1;
        while(k--){
            pq.pop();
        }
        return pq.top();
    }};


        
    //     priority_queue<int> pq;
    //     for(int i=0;i<matrix.size();i++){
    //         for(int j=0;j<matrix[i].size();j++){
    //             for(int a=0;a<matrix.size();a++){
    //                 for(int m=0;m<matrix[a].size();m++){
    //                     pq.push(matrix[i][j]^matrix[a][m]);
    //                     if(pq.size()>k) pq.pop();
    //                 }
    //             }
    //         }
    //     }
    //     return pq.top();
    // }
