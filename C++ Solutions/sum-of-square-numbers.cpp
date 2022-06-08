// https://leetcode.com/problems/sum-of-square-numbers

class Solution {
public:
    bool binary_search(long long int l,long long int r,long long int n){
        while(l<=r){
            long long int mid=l+(r-l)/2;
            if(mid*mid==n){
                return true;
            }
            else if(mid*mid<n){
               l=mid+1; 
            }
            else{
                r=mid-1;
            }
        }
        return false;
    }
    bool judgeSquareSum(int c) {
        if(c==0){
            return true;
        }
        for(long long int i=1;i*i<=c;i++){
            long long int b=c-(i*i);
            if(binary_search(0,b,b))
                return true;
        }
        return false;
    }
};