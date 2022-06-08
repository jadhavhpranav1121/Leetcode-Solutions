// https://leetcode.com/problems/check-if-all-as-appears-before-all-bs

class Solution {
public:
    bool checkString(string s) {
        int flag=0;
       for(int i=0;i<s.size()-1;i++){
           if(s[i]=='b' && s[i+1]=='a'){
               flag=1;
           }
       }
        if(flag==1){
            return false;
        }
        return true;
    }
};