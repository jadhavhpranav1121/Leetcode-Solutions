// https://leetcode.com/problems/sum-of-two-integers

class Solution {
public:
    int getSum(int a, int b) {
               int sum=a^b;
        int carry=(uint32_t)a&b;
        carry=(uint32_t)carry<<1;
        int answer=(sum | carry);
        while(carry!=0){
            answer=sum^carry;
            carry=(uint32_t)sum & carry;
            carry=(uint32_t)carry<<1;
            sum=answer;
        }
        return (sum);
    }
};