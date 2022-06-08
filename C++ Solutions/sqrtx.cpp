// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        double answer=(double)(log10(x)/2);
        return floor(pow(10,(answer)));
    }
};

// find^2=x
// 2log10(find)=log(x)
// log10(find)=log(x)/2
// find=10^(log(x)/2);