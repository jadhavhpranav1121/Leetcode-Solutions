// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=1,r=arr.size()-1;
        while(arr[l]-arr[l-1]>0){
            l++;
        }
        return l-1;
    }
};