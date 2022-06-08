// https://leetcode.com/problems/global-and-local-inversions

struct FenwickTree {
    vector<int> bit;  
    int n=1e5+5;

    FenwickTree() {
        this->n = n;
        bit.assign(n, 0);
    }


    int sum(int i) {
        int ans = 0;
	    for(; i > 0; i -= (i&-i))
		    ans += bit[i];
	    return ans;
    }

    int sum(int l, int r) {
        return sum(r) - sum(l - 1);
    }

    
    void update(int i, int x){
	  for(; i < n; i += (i&-i))
		bit[i] += x;
    }
};
class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        vector<long long> v(nums.size()+1,0);
	    for(int i=1;i<nums.size()+1;i++){
		    v[i]=nums[i-1]+1;
	    }
	    FenwickTree f;
	    long long inversion_count=0;
	    for(int i=1;i<nums.size()+1;i++){
	    	inversion_count+=(f.sum(nums.size())-f.sum(v[i]));
	    	f.update(v[i],1);
	    }
	    long long local_inversion=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                local_inversion++;
            }
        }
        return inversion_count==local_inversion;
    }
};