// https://leetcode.com/problems/trapping-rain-water

class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int left[n];
        int right[n];
        memset(left,0,sizeof(left));
        memset(right,0,sizeof(right));
        left[0]=arr[0];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],arr[i]);
        }
        right[n-1]=arr[n-1];
        for(long long i=n-2;i>=0;i--){
            right[i]=max(right[i+1],arr[i]);
        }
        long long ans=0;
        for(long long i=0;i<n;i++){
            ans+=(min(left[i],right[i])-arr[i]);
        }
        return ans;
    }
};