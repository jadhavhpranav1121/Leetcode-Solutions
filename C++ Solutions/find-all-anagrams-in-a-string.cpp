// https://leetcode.com/problems/find-all-anagrams-in-a-string

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        map<char,int> mp;
        for(auto i:p){
            mp[i]++;
        }
        int k=p.size();
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
                    v.push_back(i);
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
        return v;
    }
};