// https://leetcode.com/problems/check-if-a-string-contains-all-binary-codes-of-size-k

class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> m;
        if(s.size()<k){
            return false;
        }
        for(int i=0;i<s.size()-k+1;i++){
            m.insert(s.substr(i,k));
        }
        return m.size()>=(pow(2,k))?true:false;
    }
};