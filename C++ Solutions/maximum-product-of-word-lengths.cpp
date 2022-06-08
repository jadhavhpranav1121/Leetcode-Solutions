// https://leetcode.com/problems/maximum-product-of-word-lengths

class Solution {
public:
    int max(int a,int b){
            return a>b?a:b;
        }
    int maxProduct(vector<string>& words) {
        map<string,int> mpp;
        vector<int> answer;
        for(auto i:words){
            int ans=0;
            for(auto j:i){
                ans|=(1<<((j-'a')));
            }
            answer.push_back(ans);
            cout<<ans<<endl;
        }
        int ans=0;
        for(int i=0;i<answer.size()-1;i++){
            for(int j=i+1;j<answer.size();j++){
                if((answer[i]&answer[j])==0){
                    ans=max(ans,words[i].size()*words[j].size());
                }
            }
        }
        return ans;
    }
};