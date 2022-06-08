// https://leetcode.com/problems/check-if-n-and-its-double-exist

class Solution {
public:
    bool binarySearch(vector<int> arr,int l,int r,int value,int i){
        while(l<=r){
            int mid=l+(r-l)/2;
                if(arr[mid]==(value*2) and mid!=i){
                    return true;
                }
                else if(arr[mid]>value*2){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        bool ans=false;
        for(int i=0;i<arr.size()-1;i++){
             ans|=binarySearch(arr,0,arr.size()-1,arr[i],i);
            if(ans){
                return ans;
            }
        }
        return ans;
    }
};