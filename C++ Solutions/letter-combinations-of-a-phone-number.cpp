// https://leetcode.com/problems/letter-combinations-of-a-phone-number

class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<int,vector<string>> mpp;
        mpp[2]={"a","b","c"};
        mpp[3]={"d","e","f"};
        mpp[4]={"g","h","i"};
        mpp[5]={"j","k","l"};
        mpp[6]={"m","n","o"};
        mpp[7]={"p","q","r","s"};
        mpp[8]={"t","u","v"};
        mpp[9]={"w","x","y","z"};
        vector<string> ans;
        if(digits.size()==0){
            return ans;
        }
        else if(digits.size()==1){
            return mpp[digits[0]-'0'];
        }
        else if(digits.size()==2){
            vector<string> v;
            for(int i=0;i<mpp[digits[0]-'0'].size();i++){
                for(int j=0;j<mpp[digits[1]-'0'].size();j++){
                    string s1="";
                    s1+=(mpp[digits[0]-'0'][i]);
                    s1+=(mpp[digits[1]-'0'][j]);
                    v.push_back(s1);
                }
            }
           return v;
        }
        else{
             vector<string> v;
            for(int i=0;i<mpp[digits[0]-'0'].size();i++){
                for(int j=0;j<mpp[digits[1]-'0'].size();j++){
                    string s1="";
                    s1+=(mpp[digits[0]-'0'][i]);
                    s1+=(mpp[digits[1]-'0'][j]);
                    v.push_back(s1);
                }
            }
            ans=v;
            for(int i=2;i<digits.size();i++){
                ans=v;
                v.clear();
                for(int j=0;j<ans.size();j++){
                    for(int k=0;k<mpp[digits[i]-'0'].size();k++){
                        string s1="";
                        s1+=ans[j];
                        s1+=(mpp[digits[i]-'0'][k]);
                        v.push_back(s1);
                    }
                }
            }
            return v;
        }
    }
};