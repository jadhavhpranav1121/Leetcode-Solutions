// https://leetcode.com/problems/k-closest-points-to-origin

class Solution {
public:

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> mainVector;
        vector<pair<float,int>> imp;
        for(int i=0;i<points.size();i++){
            imp.push_back({sqrt(pow(points[i][0],2)+pow(points[i][1],2)),i});
            // cout<<1;
        }   
        //   for(auto i:imp){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
        sort(imp.begin(), imp.end());
        int count=0;
        for(auto i:imp){
            if(count>=k){
                return mainVector;
            }
            mainVector.push_back(points[i.second]);
            count++;
        }
        return mainVector;
    }
};