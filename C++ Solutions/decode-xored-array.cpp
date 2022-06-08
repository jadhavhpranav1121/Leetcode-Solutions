// https://leetcode.com/problems/decode-xored-array

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> s(encoded.size()+1);
        s[0]=first;
        for(int i=0;i<encoded.size();i++){
            s[i+1]=encoded[i]^s[i];
        }
        return s;
    }
};