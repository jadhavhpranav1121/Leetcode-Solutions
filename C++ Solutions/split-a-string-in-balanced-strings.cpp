// https://leetcode.com/problems/split-a-string-in-balanced-strings

class Solution {
public:
    int balancedStringSplit(string s) {
        vector<int> new1(s.size(),0);
        int l=0;
        int r=0;
        int count1=0;
        for(int i=0;i<new1.size();i++){
            if(s[i]=='L'){
                new1[i]=l++;
            }
            else{
                new1[i]=r++;
            }
            if(l==r){
                count1++;
            }
        }
        return count1;
    }
};