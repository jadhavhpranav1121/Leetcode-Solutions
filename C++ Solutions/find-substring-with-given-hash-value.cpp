// https://leetcode.com/problems/find-substring-with-given-hash-value

class Solution {
public:
    string subStrHash(string s, long long power, long long modulo, long long k, long long hashValue) {
        long long hash=0;
        long long n=s.size();
        long long pr=1;
        long long ind=n;
        for(long long i=n-1;i>=0;i--){
            hash=((hash*power)%modulo +(s[i]-'a'+1))%modulo;
            if(i+k>=n){
                pr=(pr*power)%modulo;
            }
            else{
                hash=((hash-(s[i+k]-'a'+1)*pr)%modulo+modulo)%modulo;
            }
            if(hash==hashValue){
                ind=i;
            }
        }
        return s.substr(ind,k);
    }
};