// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
public:

    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        vector<vector<int>> adjmatrix(n);
        for(int i=0;i<edges.size();i++){
adjmatrix[edges[i][1]].push_back(edges[i][0]);
            adjmatrix[edges[i][0]].push_back(edges[i][1]);
        }
        
        queue<int> q;
        q.push(start);
        vector<bool> visited(n,false);
        visited[q.front()]=true;
        while(!q.empty()){
            int newdata=q.front();            
            for(int i=0;i<adjmatrix[newdata].size();i++){
                if(!visited[adjmatrix[newdata][i]]){
                    q.push(adjmatrix[newdata][i]);
                    visited[adjmatrix[newdata][i]]=true;
                }
            }
            q.pop();
             
        }
        
        if(visited[end]) return true;
        return false;
    }
};