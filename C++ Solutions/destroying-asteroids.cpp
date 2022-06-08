// https://leetcode.com/problems/destroying-asteroids

class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        sort(asteroids.begin(),asteroids.end());
        long long int masss=mass;
        for(auto i:asteroids){
            if((long long int)i > masss) return false;
            masss=masss+i;
        }
        return true;
    }
};