// https://leetcode.com/problems/complement-of-base-10-integer

class Solution {
public:
    int bitwiseComplement(int n) {
        int l=n;
        if(n==0){
            return 1;
        }
        int r=1;
        while(l!=0){
            l=l>>1;
            r=r<<1;
        }
        return (~n & r-1);
    }
};