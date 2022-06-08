// https://leetcode.com/problems/min-max-game

class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        while(nums.size()!=1){
		vector<int> newNum;
        int n=nums.size();
		for(int i=0;i<n/2;i++){
			if(i%2==0){	
				newNum.push_back(min(nums[2*i],nums[2*i+1]));
			}
			else{
				newNum.push_back(max(nums[2*i],nums[2*i+1]));
			}
		}
		nums=newNum;	
	}
        return nums[0];
    }
};