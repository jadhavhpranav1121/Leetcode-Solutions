// https://leetcode.com/problems/relative-ranks

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;
        vector<string> s(score.size());
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        int size=pq.size();
        for(int i=0;i<size;i++){
            pair<int,int> nw1=pq.top();
            pq.pop();
            if(i==0){
                s[nw1.second]="Gold Medal";
            }
            else if(i==1){
                s[nw1.second]="Silver Medal";
            }
            else if(i==2){
                s[nw1.second]="Bronze Medal";
            }
            else{
                s[nw1.second]=to_string(i+1);
            }
        }
        return s;
    }
};