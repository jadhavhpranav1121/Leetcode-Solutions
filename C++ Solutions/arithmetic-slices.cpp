// https://leetcode.com/problems/arithmetic-slices

class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int answer=0;
        int first=nums[0];
        int d=0;
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(i==1){
                d=nums[i]-first;
                count=2;
            }
            else{
                if(nums[i]-nums[i-1]!=d){
                    if(count>=3){
                        answer+=(count-2)*((count-2)+1)/2;
                    }
                    count = 2;
                     d = nums[i] - nums[i-1];

                }
                else{
                    count++;
                }
            }
        }
         if (count >= 3) {
            answer += ((count-2) * (count-1)) / 2;
        }
        return answer;
    }
};