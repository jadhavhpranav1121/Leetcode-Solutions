// https://leetcode.com/problems/minimum-sum-of-four-digit-number-after-splitting-digits

class Solution {
public:
    int minimumSum(int num) {
        int a=num%10;
        num=num/10;
        int b=num%10;
        num/=10;
        int c=num%10;
        num=num/10;
        int d=num%10;
        num=num/10;
        vector<int> v{a,b,c,d};
        sort(v.begin(),v.end());
        int e=0;
        e=(v[2])+(v[0]*10);
        int f=0;
        f=(v[3])+(v[1]*10);
        return e+f;
    }
};