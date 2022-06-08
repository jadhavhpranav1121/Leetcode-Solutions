// https://leetcode.com/problems/rearrange-characters-to-make-target-string

class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        map<char,int> mpp_target,mpp_ans;
        int ans=INT_MAX;
        for(auto i:target){
            mpp_target[i]++;
        }
        for(auto i:s){
            mpp_ans[i]++;
        }
        for(auto i:mpp_target){
            if(mpp_ans[i.first]!=0)
                ans=min(ans,mpp_ans[i.first]/i.second);
            else{
                return 0;
            }
            
        }
        return ans;
    }
};