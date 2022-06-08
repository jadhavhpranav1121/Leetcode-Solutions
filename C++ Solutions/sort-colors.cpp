// https://leetcode.com/problems/sort-colors

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,m=0,h=nums.size()-1;
        while(m<=h){
            int x=nums[m];
            if(x==0){
                swap(nums[l],nums[m]);
                l++;
                m++;
            }
            else if(x==1){
                m++;
            }
            else{
                swap(nums[h],nums[m]);
                h--;
            }
        }
    }
};