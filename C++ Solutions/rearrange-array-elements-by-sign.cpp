// https://leetcode.com/problems/rearrange-array-elements-by-sign

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> odd;
        vector<int> even;
        for(auto i:nums){
            if(i>0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        vector<int> solutions(nums.size());
        int k=0;
        for(int i=0;i<nums.size();i+=2){
            solutions[i]=even[k];
            k++;
        }
        k=0;
        for(int i=1;i<nums.size();i+=2){
            solutions[i]=odd[k];
            k++;
        }
        return solutions;
    }
};