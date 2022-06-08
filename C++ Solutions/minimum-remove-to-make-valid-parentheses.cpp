// https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
              st.push({s[i],i});  
            }
            else if(s[i]==')'){
                if(!st.empty() and st.top().first=='('){
                    st.pop();
                }
                else{
                    s[i]='.';
                }
            }
        }
        while(!st.empty()){
            pair<char,int> ans=st.top();
            s[ans.second]='.';
            st.pop();
        }
        for(auto i:s){
            if(i=='.'){
                continue;
            }
            ans+=i;
        }
        return ans;
    }
};