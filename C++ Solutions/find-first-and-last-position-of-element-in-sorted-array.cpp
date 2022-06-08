// https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    int binarySearch(vector<int> nums,int l,int r,int target,int value){
        int ans=-1;
        while(l<=r){
            int mid=(r+l)/2;
            if(nums[mid]==target){
                ans=mid;
                if(value==-1){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int l=0,r=nums.size()-1;
        vector<int> v(2,-1);
        int min1=INT_MAX,max1=INT_MIN;
        min1=binarySearch(nums,l,r,target,-1);
        max1=binarySearch(nums,l,r,target,1);
        if(min1!=-1){
            v[0]=min1;
            v[1]=max1;
        }
        return v;
    }
};