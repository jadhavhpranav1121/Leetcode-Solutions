// https://leetcode.com/problems/minimum-cost-of-buying-candies-with-discount

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end(),greater<int>());
        int sum=0;
        if(cost.size()==1){
            return cost[0];
        }
        for(int i=0;i<cost.size();i+=3){
                if(i+1<cost.size()){               
                    sum+=cost[i]+cost[i+1];
                }
            else{
                sum+=cost[i];
            }
        }
        return sum;
    }
};