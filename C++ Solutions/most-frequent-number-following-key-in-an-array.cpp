// https://leetcode.com/problems/most-frequent-number-following-key-in-an-array

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        map<int,int> mpp;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==key){
                mpp[nums[i+1]]++;
            }
        }
        int max=INT_MIN;
        int answer=0;
        for(auto i:mpp){
            if(i.second>max){
                answer=i.first;
                max=i.second;   
            }
        }
        return answer;
    }
};