// https://leetcode.com/problems/sqrtx

class Solution {
    public int mySqrt(int x) {
        long l=0;
        long r=x;
        int ans=0;
        while(l<=r){
            long mid=((long)r+(long)l)/2;
            if(mid*mid==x){
                return (int)mid;
            }
            else if(mid*mid<x){
                l=mid+1;
                ans=(int)mid;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
}