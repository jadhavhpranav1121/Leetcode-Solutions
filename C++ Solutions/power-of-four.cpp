// https://leetcode.com/problems/power-of-four

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0){
            return false;
        }
        double value=log10(n)/log10(4);
        return floor(value)==ceil(value);
    }       
};