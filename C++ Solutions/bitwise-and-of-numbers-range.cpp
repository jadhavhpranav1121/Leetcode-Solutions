// https://leetcode.com/problems/bitwise-and-of-numbers-range

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count1=0;
        while(left!=right){
            left>>=1;
            right>>=1;
            count1++;
        }
        return right<<count1;
    }
};