class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum= 0;
        int n=nums.size();
        for(int i:nums) {
            sum+=i;
        }
        bool f=false;
        int target=sum-x;
        int currSum=0;
        int maxLen=0;
        int i=0; 
        for (int j=0;j<n;j++) {
            currSum+=nums[j];
            while (i<=j && currSum>target) {
                currSum-=nums[i];
                i+=1;
            }
            if (currSum==target) {
                f=true;
                maxLen=max(maxLen,j-i+1);
            }
        }
        return f?(n-maxLen):-1;
    }
};
