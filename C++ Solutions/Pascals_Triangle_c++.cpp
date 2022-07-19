class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        if(numRows==1){
            vector<int> v1;
            v1.push_back(1);
            v.push_back(v1);
            return v;
        }
        else if(numRows==2){
            vector<int> v1{1};
            vector<int> v2{1,1};
            v.push_back(v1);
            v.push_back(v2);
            return v;
        }
        else{
            vector<int> v1{1};
            vector<int> v2{1,1};
            v.push_back(v1);
            v.push_back(v2);
            v1.clear();
            for(int i=2;i<numRows;i++){
                v1.push_back(1);
                for(int j=0;j<v[v.size()-1].size()-1;j++){
                    v1.push_back(v[v.size()-1][j]+v[v.size()-1][j+1]);
                }
                v1.push_back(1);
                v.push_back(v1);
                v1.clear();
            }
        }
        return v;
    }
};
