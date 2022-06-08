// https://leetcode.com/problems/car-pooling

class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<int> nums(1001);
        for(auto i:trips){
            nums[i[1]]+=i[0];
            nums[i[2]]-=i[0];
        }
        int new1=0;
        for(auto i:nums){
            new1+=i;
            if(new1>capacity){
                return false;
            }
        }
        return true;
    }
};