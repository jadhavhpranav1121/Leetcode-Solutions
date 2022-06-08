// https://leetcode.com/problems/partition-array-according-to-given-pivot

class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> new1,new2,new3;
        for(auto i:nums){
            if(i<pivot){
                new1.push_back(i);
            }
            else if(i==pivot){
                new2.push_back(i);
            }
            else{
                new3.push_back(i);
            }
        }
        for(auto i:new2){
                new1.push_back(i);
        }
        for(auto i:new3){
                new1.push_back(i);
        }
        return new1;
    }
};