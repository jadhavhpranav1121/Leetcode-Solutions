// https://leetcode.com/problems/largest-number-after-digit-swaps-by-parity

class Solution {
public:
    int largestInteger(int num) {
        string s=to_string(num);
        if(s.size()==1 || s.size()==2){
            return num;
        }
        for(int i=0;i<s.size()-1;i++){
            for(int j=i+1;j<s.size();j++){
                if((s[i]-'0')%2==0 and (s[j]-'0')%2==0 and s[i]<s[j]){
                    swap(s[i],s[j]);
                }
                else if((s[i]-'0')%2!=0 and (s[j]-'0')%2!=0 and s[i]<s[j]){
                    swap(s[i],s[j]);
                }
            }
        }
        return stoi(s);
    }
};