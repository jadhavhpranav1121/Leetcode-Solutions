// https://leetcode.com/problems/reverse-string

class Solution {
public:
    
    void reverseString(vector<char>& s,int i=0) {
        int s1=s.size();
        if(i==s1/2){
            return;
        }
        swap(s[i],s[s1-i-1]);
        reverseString(s,i+1);
    }
};