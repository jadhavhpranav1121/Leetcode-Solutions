class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int j=0;
        int i=0;
        int mx=0;
        map<char,int> mpp;
        while(j<s.size()){
            mpp[s[j]]++;
            if(mpp.size()==j-i+1){
                mx=max(mx,j-i+1);
                j++;
            }
            else if(mpp.size()<j-i+1){
                while(mpp.size()<j-i+1){
                    mpp[s[i]]--;
                    if(mpp[s[i]]==0){
                        mpp.erase(s[i]);
                    }
                    i++;
                }
                j++;
            }
        }
        return mx;
    }
};
