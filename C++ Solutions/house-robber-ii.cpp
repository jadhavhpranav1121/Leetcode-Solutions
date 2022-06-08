// https://leetcode.com/problems/house-robber-ii

class Solution {
public:
    int answer(vector<int>& nums,int l,int r){
        int n=nums.size();
	    int prev=(l==1?nums[0]:nums[1]);
	    int prev2=0;
	    for(int i=l;i<r;i++){
		    int take=nums[i];
		    if(i>1) take+=prev2;
		    int notTake=0+prev;
		    int curi=max(take,notTake);
		    prev2=prev;
		    prev=curi;
	    }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0) return 0;
        if(nums.size()==1) return nums[0];
        if(nums.size()==2) return max(nums[0],nums[1]);
        return max(answer(nums,1,nums.size()-1),answer(nums,2,nums.size()));
    }
};