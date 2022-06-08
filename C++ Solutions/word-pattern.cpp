// https://leetcode.com/problems/word-pattern

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream str(s);
        map<string,int> mpp1;
        map<char,int> mpp2;
        vector<string> new1;
        map<char,string> mpp;
        string str2;
        while(str>>str2){
            new1.push_back(str2);
        }
        if(new1.size()!=pattern.size()){
            return false;
        }
        for(auto i:pattern){
            mpp2[i]++;
        }
        for(auto i:new1){
            mpp1[i]++;
        }
        if(mpp1.size()!=mpp2.size()){
            return false;
        }
         for(int i=0;i<new1.size();i++){
            if(mpp[pattern[i]]!=""){
                cout<<mpp[pattern[i]]<<" "<<new1[i];
                if(mpp[pattern[i]]!=new1[i]){
                    return false;
                }
                }
            else{
                mpp[pattern[i]]=new1[i];
            }
        }
        return true;
    }
};