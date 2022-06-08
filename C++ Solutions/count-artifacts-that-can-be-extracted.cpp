// https://leetcode.com/problems/count-artifacts-that-can-be-extracted

class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<int>> sample(n,vector<int>(n,0));
        int r1,c1,r2,c2;
        set<int> answer;
        int k=1;
        for(auto first:artifacts){
            r1=first[0];
            c1=first[1];
            r2=first[2];
            c2=first[3];
            if(r1==r2 and c1==c2){
                sample[r1][c1]=k;
            }
            else if(r1==r2){
                for(int i=c1;i<=c2;i++){
                    sample[r1][i]=k;
                }
            }
            else if(c1==c2){
                for(int i=r1;i<=r2;i++){
                    sample[i][c1]=k;
                }
            }
            else{
                for(int i=r1;i<=r2;i++){
                    for(int j=c1;j<=c2;j++){
                        sample[i][j]=k;
                    }   
                }
            }
            k++;
        }
        for(auto i:dig){
            sample[i[0]][i[1]]=-10;
        }
        // cout<<k<<endl;
        for(int i=0;i<sample.size();i++){
            for(int j=0;j<sample[0].size();j++){
                // cout<<sample[i][j]<<" ";
                if(sample[i][j]!=-10 and sample[i][j]!=0){
                    answer.insert(sample[i][j]);
                }
            }
            // cout<<endl;
        }
        return k-answer.size()-1;
    }
};