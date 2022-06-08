// https://leetcode.com/problems/majority-element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        int answer=0;
        int max1=INT_MIN;
        for(auto i:mpp){
            if(i.second>=floor(nums.size()/2) and i.second>max1){
                max1=i.second;
                answer=i.first;
            }
        }
        return answer;
    }
    
};