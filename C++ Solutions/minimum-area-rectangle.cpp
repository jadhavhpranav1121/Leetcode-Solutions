// https://leetcode.com/problems/minimum-area-rectangle

class Solution {
public:
    int minAreaRect(vector<vector<int>>& points) {
        map<int,set<int>> mpp;
        for(auto i:points){
            if(mpp.find(i[0])==mpp.end()){
                set<int> new1;
                mpp[i[0]]=new1;
            }
            mpp[i[0]].insert(i[1]);
        }
        int area1=INT_MAX;
        for(int i=0;i<points.size();i++){
            for(int j=i;j<points.size();j++){
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                if(x1!=x2 and y1!=y2){
                    if(mpp[x1].find(y2)!=mpp[x1].end() and mpp[x2].find(y1)!=mpp[x2].end()){
                        area1=min(area1,(abs(x1-x2)*abs(y1-y2)));      
                                  // cout<<area1;
                    }
                }
            }
        }
      
    
    return area1==INT_MAX?0:area1;               
    }  
    
};