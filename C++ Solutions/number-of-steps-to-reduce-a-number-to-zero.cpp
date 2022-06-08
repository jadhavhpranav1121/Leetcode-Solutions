// https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero

class Solution {
public:
    int answer(int num){
        if(num==0){
            return 0;
        }
        return 1+(num%2==0?answer(num/2):answer(num-1));
    }
    int numberOfSteps(int num) {
        return answer(num);
    }
};