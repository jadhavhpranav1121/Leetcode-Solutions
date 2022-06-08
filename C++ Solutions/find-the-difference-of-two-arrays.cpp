// https://leetcode.com/problems/find-the-difference-of-two-arrays

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        set<int> v1,v2;
        vector<int> v3,v4;
        for(int i=0;i<nums1.size();i++){
            if(find(nums2.begin(),nums2.end(),nums1[i])==nums2.end()){
                v1.insert(nums1[i]);
            }
        }
          for(int i=0;i<nums2.size();i++){
            if(find(nums1.begin(),nums1.end(),nums2[i])==nums1.end()){
                v2.insert(nums2[i]);
            }
        }
        for(auto i:v1){
            v3.push_back(i);
        }
        for(auto i:v2){
            v4.push_back(i);
        }
        
          ans.push_back(v3);
        ans.push_back(v4);
        return ans;
    }
};