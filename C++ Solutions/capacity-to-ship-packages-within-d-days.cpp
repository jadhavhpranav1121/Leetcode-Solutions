// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days

class Solution {
public:
    bool fun(int mid,vector<int>& weights,int day){
        int n=weights.size();
        int days=1;
        int total=0;
        bool isValid=true;
        for(int i=0;i<n;i++){
            if(weights[i]>mid){
                isValid=false;
            }
            if(total+weights[i]<=mid){
                total+=weights[i];
            }
            else{
                days++;
                total=weights[i];
            }
        }
        if(!isValid){
            return false;
        }
        return (days<=day);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int l=1;
        int r=500*(5e4);
        while(l<r){
            int mid=(l+r)/2;
            if(fun(mid,weights,days)){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};