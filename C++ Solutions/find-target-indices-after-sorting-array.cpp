// https://leetcode.com/problems/find-target-indices-after-sorting-array

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        vector<int> la;
        // if(nums.size()==1){
        //     if(nums[0]==target){
        //         la.push_back(0);
        //         return la;
        //     }
        //     return la;
        // }
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target){
                la.push_back(mid);
                int i=mid-1;
                // cout<<
                while(i>=0 and nums[i]==target){
                    la.insert(la.begin(),i);
                    i--;
                }
                i=mid+1;
                while(i<nums.size() and nums[i]==target){
                    la.push_back(i);
                    i++;
                }
                break;
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else if(nums[mid]>target){
                r=mid-1;
            }
        }
        return la;
    }
};