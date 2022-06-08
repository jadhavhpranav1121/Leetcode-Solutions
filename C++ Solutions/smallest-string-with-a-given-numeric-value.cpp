// https://leetcode.com/problems/smallest-string-with-a-given-numeric-value

class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        for(int i=0;i<n;i++){
            s.push_back('a');
        }
        if(k==n){
            return s;
        }
        else{
            k-=n;
            n--;
            while(k>=26){
                s[n]='z';
                k=(k+1)-26;
                n--;
            }
            s[n]=(k+'a');
            
        }
        return s;
    }
};