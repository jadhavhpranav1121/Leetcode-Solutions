// https://leetcode.com/problems/find-k-closest-elements

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i:arr){
            pq.push(make_pair(abs(i-x),i));
            
        }
        vector<int> solution;
        int i=0;
        while(!pq.empty() and i<k){
            solution.push_back(pq.top().second);
            pq.pop();
            i++;
        }
        sort(solution.begin(),solution.end());
        return solution;
    }
};