// https://leetcode.com/problems/sort-even-and-odd-indices-independently

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd,even,ans(nums.size());
        int n=nums.size();
        for(int i=1;i<n;i+=2){
            odd.push_back(nums[i]);
        }
        for(int i=0;i<n;i+=2){
            even.push_back(nums[i]);
        }
        sort(odd.begin(),odd.end(),greater<int>());
            sort(even.begin(),even.end());
            int j=0;
 for(int i=1;i<n;i+=2){
            ans[i]=odd[j];
     j++;
        }
     j=0;
     for(int i=0;i<n;i+=2){
            ans[i]=even[j];
     j++;
        }
        return ans;
            }
};