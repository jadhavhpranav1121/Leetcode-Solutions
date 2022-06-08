// https://leetcode.com/problems/koko-eating-bananas

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int r=*max_element(piles.begin(),piles.end());
        int l=1;
        int res=INT_MAX;
        while(l<=r){
            int hours=0;
            int mid=l+(r-l)/2;
            for(auto i:piles){
                hours+=i/mid+(i%mid!=0);
            }
            if(hours<=h){
                res=min(res,mid);
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return res;
    }
};