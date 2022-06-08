// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int count1=0;
        for(int i=0;i<grid.size();i++){
            vector<int> v=grid[i];
            int l=0,r=v.size()-1;
            int s=v.size();
            int ans=0;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(v[mid]<0){
                    ans=max(ans,s-mid);
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            count1+=ans;
        }
        return count1;
    }
};