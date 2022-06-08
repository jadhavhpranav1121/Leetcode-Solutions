// https://leetcode.com/problems/smallest-value-of-the-rearranged-number

class Solution {
public:
    long long smallestNumber(long long num) {
        string s=to_string(num);
        if(num<0){
            sort(s.begin(),s.end(),greater<long long int>());
        }
        else{
        sort(s.begin(),s.end());
        }
        if(s.size()==1){
            return num;
        }
        long long int i=0;
        while(s[i]=='0'){
            i++;
        }
        swap(s[0],s[i]);
        stringstream num1(s);
            long long int x = 0;
            num1 >> x;
        return ((num<0)?-1*x:x);
    }
};