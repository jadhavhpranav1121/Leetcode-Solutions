// https://leetcode.com/problems/shuffle-string

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string new1="";
        vector<char> s1(s.size());
        for(int i=0;i<s.size();i++){
            s1[indices[i]]=s[i];
        }
        for(auto i:s1){
            new1+=i;
        }
        return new1;
    }
};