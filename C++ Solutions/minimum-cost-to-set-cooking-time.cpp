// https://leetcode.com/problems/minimum-cost-to-set-cooking-time

class Solution {
public:
    int getAns(int s,int x,int y,int min,int sec){
        int target=(min*100)+sec;
        vector<int> v;
        while(target) v.push_back(target%10),target/=10;
        reverse(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==s) ans+=y;
            else ans+=(x+y),s=v[i];
        }
        return ans;
    }
    int minCostSetTime(int startAt, int moveCost, int pushCost, int targetSeconds) {
        int ans=INT_MAX;
        if(targetSeconds>99){
            int minutes=targetSeconds/60,seconds=targetSeconds%60;
            if(minutes<100){
                ans=min(ans,getAns(startAt,moveCost,pushCost,minutes,seconds));
            }
            minutes--,seconds+=60;
            if(seconds<=99){
                ans=min(ans,getAns(startAt,moveCost,pushCost,minutes,seconds));
            }
        }
        else{
            ans=min(ans,getAns(startAt,moveCost,pushCost,0,targetSeconds));
            if(targetSeconds>=60){
                ans=min(ans,getAns(startAt,moveCost,pushCost,1,targetSeconds%60));
            }
        }
        return ans;
    }
};