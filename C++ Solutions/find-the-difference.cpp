// https://leetcode.com/problems/find-the-difference

class Solution {
public:
    char findTheDifference(string s, string t) {
        int first=0,second=0;
        for(auto i:s){
            first+=(i-'0');
        }
        for(auto i:t){
            second+=(i-'0');
        }
        return (second-first)+'0';
    }
};