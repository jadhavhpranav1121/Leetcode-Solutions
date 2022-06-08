// https://leetcode.com/problems/all-ancestors-of-a-node-in-a-directed-acyclic-graph

class Solution {
public:
    void bfs(int s,int n,map<int,vector<int>> &mpp,vector<vector<int>>& answer){
         bool *visited = new bool[n];
        for(int i = 0; i < n; i++)
        visited[i] = false;
        deque<int> q;
 
       visited[s] = true;
        q.push_back(s);
        deque<int>::iterator i;
 vector<int> answer1;
    while(!q.empty())
    {
        s = q.front();
        answer1.push_back(s);
        q.pop_front();
    for (auto j:mpp[s])
        {
            if (!visited[j])
            {
                visited[j] = true;
                q.push_back(j);
            }
        }
    }
     vector<int>::iterator it;
 
    it = answer1.begin();
    answer1.erase(it);
        sort(answer1.begin(),answer1.end());
    answer.push_back(answer1);
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        map<int,vector<int>> mpp;
        for(auto ed:edges){
            mpp[ed[1]].push_back(ed[0]);
        }
        vector<vector<int>> answer;
        vector<bool> visited(n,false);
        for(int i=0;i<n;i++){
                bfs(i,n,mpp,answer);
        }
        return answer;
    }
};