// https://leetcode.com/problems/last-stone-weight

class Solution {
public:
    int answer(priority_queue<int>& pq,vector<int>& stones){
        if(stones.size()==0){
            return 0;
        }
        if(stones.size()==1){
            return stones[0];
        }
        for(int i=0;i<stones.size();i++){
            pq.push(stones[i]);
        }
        while(!pq.empty()){
            if(pq.size()==1){
                int ans=pq.top();
                pq.pop();
                return ans;
            }
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();
            cout<<first<<" "<<second;
            if(first>second){
                pq.push(first-second);
            }
        }
        return (pq.size()==0?0:pq.top());
    }
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==0){
            return 0;
        }
        if(stones.size()==1){
            return stones[0];
        }
        priority_queue<int> pq;
        return answer(pq,stones);
    }
};