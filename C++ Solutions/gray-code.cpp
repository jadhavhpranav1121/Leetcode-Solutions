// https://leetcode.com/problems/gray-code

class Solution {
public:
    vector<int> solutions(int n){
        if(n==1){
            vector<int> new1;
            new1.push_back(0);
            new1.push_back(1);
            return new1;
        }
        vector<int> rres=solutions(n-1);
        vector<int> mres;
        for(int i=0;i<rres.size();i++){
            int new2=rres[i];
            mres.push_back(new2);
        }
        for(int i=rres.size()-1;i>=0;i--){
            int new2=rres[i];
            int r=log2(rres.size());
            int expo=(1<<r);
            mres.push_back(new2 | expo);
        }
        return mres;
    }
    vector<int> grayCode(int n) {
        return solutions(n);
    }
};