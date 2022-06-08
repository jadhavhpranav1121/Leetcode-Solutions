// https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c

class Solution {
public:
    int minFlips(int a, int b, int c) {
       int ans=0;
       for(int i=0;i<32;i++){
           bool ai=false,bi=false,ci=false;
           if((a & (1<<i))>0) ai=true;
           if((b & (1<<i))>0) bi=true;
           if((c & (1<<i))>0) ci=true;
           if(ci){
               if(!ai && !bi) ans++;
           }
           else{
               if(ai && bi) ans+=2;
               else if(ai || bi) ans++;
           }
           
       }
        return ans;
    }
};