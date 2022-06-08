// https://leetcode.com/problems/partition-labels

class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        vector<int> endIndex(26,INT_MAX);
        for(int i=0;i<s.size();i++){
            endIndex[s[i]-'a']=i;
        }
        int i=0;
        while(i<s.size()){
            char startChar=s[i];
            int index=endIndex[startChar-'a'];
            for(int j=0;j<=index;j++){
                index=max(index,endIndex[s[j]-'a']);
            }
            ans.push_back(index-i+1);
            i=index+1;
        }
        return ans;
    }
};