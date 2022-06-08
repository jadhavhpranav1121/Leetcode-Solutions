// https://leetcode.com/problems/determine-if-string-halves-are-alike

class Solution {
public:
    bool halvesAreAlike(string s) {
        int vowel1=0,vowel2=0;   
        for(int i=0;i<s.size();i++){
            if(i>(s.size()/2)-1){
                if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i'  || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I'){
                    vowel2++;
                }
            }
            else{
                 if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='u' || s[i]=='i' || s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='U' || s[i]=='I'){
                    vowel1++;
                }
            }
        }
        return vowel1==vowel2;
    }
};