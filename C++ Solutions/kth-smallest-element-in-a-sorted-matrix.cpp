// https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> answer;
        for(int i=matrix.size()-1;i>=0;i--){
            for(int j=matrix[i].size()-1;j>=0;j--){
                answer.push(matrix[i][j]);
                if(answer.size()>k) answer.pop();
            }
        }
        return answer.top();
    }
};