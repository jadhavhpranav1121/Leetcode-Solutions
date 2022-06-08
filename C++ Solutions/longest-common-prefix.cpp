// https://leetcode.com/problems/longest-common-prefix

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0,j=0,k=0;
        int cnt=0;
        string s=strs[0];
        for(int i=0;i<s.size();i++){
        for(int q=1;q<strs.size();q++){
                if(s[i]!=strs[q][i]){
                    return s.substr(0,i);
                }
            }
        }
        return s;
    }
};