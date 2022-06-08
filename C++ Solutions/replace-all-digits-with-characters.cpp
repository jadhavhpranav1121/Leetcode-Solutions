// https://leetcode.com/problems/replace-all-digits-with-characters

class Solution {
public:
    string replaceDigits(string s) {
        int size1=s.size();
        for(int i=0;i<size1;i++){
            if(i%2==1){
                s[i]=(s[i-1]+(int)s[i]-'0');
            }
        }
        return s;
    }
};