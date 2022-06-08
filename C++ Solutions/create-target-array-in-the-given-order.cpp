// https://leetcode.com/problems/create-target-array-in-the-given-order

class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target(nums.size(),INT_MAX);
        for(int i=0;i<index.size();i++){
            if(target[index[i]]==INT_MAX){
                target[index[i]]=nums[i];
                }   
            else{
                for(int j=nums.size()-1;j>index[i];j--){
                   target[j]=target[j-1];
                }
               target[index[i]]=nums[i];
            }
        }
        return target;
    }
};