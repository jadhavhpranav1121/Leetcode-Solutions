// https://leetcode.com/problems/find-first-palindromic-string-in-the-array

class Solution {
public:
    bool isPalindromic(string s,int i=0){
        if((s.size()/2)+1==i){
            return true;
        }
        return s[i]==s[s.size()-i-1] and isPalindromic(s,i+1);
    }
    string firstPalindrome(vector<string>& words) {
        for(auto i:words){
            if(isPalindromic(i)){
                return i;
            }
        }
        return "";
    }
};