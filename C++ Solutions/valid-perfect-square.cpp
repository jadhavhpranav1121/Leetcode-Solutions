// https://leetcode.com/problems/valid-perfect-square

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l=0,r=num;
        if(num==1){
            return true;
        }
        while(l<=r){
            long long mid=l+(r-l)/2;
            if(mid*mid==num){
                return true;
            }
            if(mid*mid<num){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return false;
    }
};