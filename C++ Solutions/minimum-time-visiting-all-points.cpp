// https://leetcode.com/problems/minimum-time-visiting-all-points

class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int sum1=0;
        for(int i=0;i<points.size()-1;i++){
            int a=(points[i+1][0]-points[i][0]);
            int b=(points[i+1][1]-points[i][1]);
            a=abs(a);
            b=abs(b);
            sum1+=(a>b?a-b:b-a)+min(abs(a),abs(b));
        }   
        return sum1;
    }
};