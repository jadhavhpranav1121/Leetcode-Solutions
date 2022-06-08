// https://leetcode.com/problems/find-numbers-with-even-number-of-digits

class Solution {
public:
    int noOfDigits(int nums){
        if(nums==0){
            return 0;
        }
        return 1+noOfDigits(nums/10);
    }
    int findNumbers(vector<int>& nums) {
        int answer=0;
        for(auto i:nums){
            if(noOfDigits(i)%2==0){
                answer++;
            }
        }
        return answer;
    }
};