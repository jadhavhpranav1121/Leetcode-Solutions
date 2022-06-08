// https://leetcode.com/problems/permutation-in-string

class Solution {
public:
    bool checkInclusion(string s1, string s) {
        map<char,int> mp;
        for(auto i:s1){
            mp[i]++;
        }
        int k=s1.size();
        int j=0,i=0,count1=mp.size();
        int n=s.size();
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count1--;
                }
            }
            if(j-i+1<k){
                j++;
            }
            else if(j-i+1==k){
                if(count1==0){ 
                    return true;
                }
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]==1){
                        count1++;
                    }
                }
                i++;
                j++;
            }
        }
        return false;
    }
};