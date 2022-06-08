// https://leetcode.com/problems/check-if-it-is-a-straight-line

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates[0][0]==coordinates[1][0]){
            for(int i=2;i<coordinates.size();i++){
                if(coordinates[i][0]!=coordinates[0][0]){
                    return false;
                }
            }
            return true;
        }
        for(int i=0;i<coordinates.size();i++){
            if(coordinates[i][0]!=0){
                
            }
        }
        float slope=(float)((float)(coordinates[1][1]-coordinates[0][1])/(float)(coordinates[1][0]-coordinates[0][0]));
        const float value=(float)(coordinates[0][1]-(slope*coordinates[0][0]));
        for(int i=1;i<coordinates.size();i++){
            if(value!=(coordinates[i][1]-(slope*coordinates[i][0]))){
                return false;
            }
        }
        return true;
    }
};