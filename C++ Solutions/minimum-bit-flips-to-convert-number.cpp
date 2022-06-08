// https://leetcode.com/problems/minimum-bit-flips-to-convert-number

class Solution {
public:
    int numberOf1(int n){
        int count=0;
        while(n>0){
            count++;
            int x=n&-n;
            n-=x;
        }
        return count;
    }
    int minBitFlips(int start, int goal) {
        int ans=(start^goal);
        return numberOf1(ans);
    }
};