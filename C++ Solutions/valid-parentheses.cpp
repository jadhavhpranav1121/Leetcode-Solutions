// https://leetcode.com/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> st1;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st1.push(s[i]);
            }
            else{
                if(!st1.empty() and (st1.top()=='(' and s[i]==')' || st1.top()=='{' and s[i]=='}' || st1.top()=='[' and s[i]==']')){
                    st1.pop();
                }
                else{
                    return false;
                }
            }
        }
        return st1.empty();
    }
};