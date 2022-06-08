// https://leetcode.com/problems/keep-multiplying-found-values-by-two

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){
            auto it=find(nums.begin(),nums.end(),original);
            if(it!=nums.end()){
                original=original*2;
            }
            else{
                return original;
            }
        }
    }
};