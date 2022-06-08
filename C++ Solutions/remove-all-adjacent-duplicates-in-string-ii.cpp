// https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii

class Solution {
public:
    string removeDuplicates(string s, int k) {
       int n=s.size();
       if(n<k) return s;
       stack<pair<char,int>> s1;
       for(int i=0;i<n;i++){
       		if(s1.empty() || s1.top().first!=s[i]){
       			s1.push({s[i],1});
       		}
       		else{
       			auto st=s1.top();
       			s1.pop();
       			s1.push({s[i],st.second+1});
       		}
       		if(s1.top().second==k) s1.pop();
       }
       string ans="";
       while(!s1.empty()){
       	auto s2=s1.top();
       	s1.pop();
       	while(s2.second--){
       		ans+=s2.first;
       	}
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};