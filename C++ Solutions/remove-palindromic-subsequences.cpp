// https://leetcode.com/problems/remove-palindromic-subsequences

class Solution {
public:
    bool ispalindrome(string s){
        for(int i=0;i<(s.size()/2);i++){
            if(s[i]!=s[s.size()-i-1]){
                return false;
            }
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(s.size()==0) return 1;
        if(ispalindrome(s)) return 1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){
                return 2;
            }
        }
        return 1;
    }
};