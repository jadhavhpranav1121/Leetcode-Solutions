// https://leetcode.com/problems/queries-on-number-of-points-inside-a-circle

class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> counting(queries.size());
        for(int i=0;i<queries.size();i++){
            for(int j=0;j<points.size();j++){
                int d=(queries[i][2]*queries[i][2])-(pow(points[j][0]-queries[i][0],2)+pow(points[j][1]-queries[i][1],2));
                if(d>0 or d==0){
                    counting[i]++;
                }
            }
        }
        return counting;
    }
};