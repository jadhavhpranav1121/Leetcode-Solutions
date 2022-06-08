// https://leetcode.com/problems/count-of-matches-in-tournament

class Solution {
public:
    int answer(int n,int ans){
        if(n==1){
            return ans;
        }
        ans=ans+(n%2==0?n/2:(n-1)/2);
        return (n%2==0?answer(n/2,ans):answer((n-1)/2+1,ans));
    }
    int numberOfMatches(int n) {
        return answer(n,0);
    }
};