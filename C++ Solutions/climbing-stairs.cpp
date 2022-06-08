// https://leetcode.com/problems/climbing-stairs

class Solution {
public:
    int climbStairs(int n) {
		   long long int prev2=0;
		   int prev=1;
		   if(n<=1 and n>=0) return n;
		   int curi=0;
		   for(int i=2;i<=n+1;i++){
		       curi=(prev2+prev);
		       prev2=prev;
		       prev=curi;
		   }
		   return curi;
		}
};