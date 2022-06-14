class Solution {
public:

    int minDistance(string word1, string word2) {
        int dp[word1.size()+1][word2.size()+1];
        memset(dp,0,sizeof(dp));
        for(int i=1;i<=word1.size();i++){
            for(int j=1;j<=word2.size();j++){
                if(word1[i-1]==word2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int max1=dp[word1.size()][word2.size()];
        return (word1.size()-max1)+(word2.size()-max1);
    }
};
