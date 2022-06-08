// https://leetcode.com/problems/evaluate-division

class Solution {
public:
    void dfs(string source,string destination,unordered_map<string,vector<pair<string,double>>> adj,set<string> vis,double &ans,double tempAns){
        if(vis.find(source)!=vis.end()){
            return;
        }
        else{
            vis.insert(source);
            if(source==destination){
                ans=tempAns;
                return;
            }
            else{
                for(auto &nbr:adj[source]){
                    dfs(nbr.first,destination,adj,vis,ans,tempAns*nbr.second);
                }
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& val, vector<vector<string>>& q) {
        unordered_map<string,vector<pair<string,double>>> adj;
        for(int i=0;i<e.size();i++){
            string u=e[i][0];
            string v=e[i][1];
            double wt=val[i];
            adj[u].push_back({v,wt});
            adj[v].push_back({u,1/wt});
        }
        vector<double> ans;
        for(int i=0;i<q.size();i++){
            string source=q[i][0];
            string destination=q[i][1];
            set<string> vis;
            double res=-1.0;
            if(adj.find(source)!=adj.end()){
                dfs(source,destination,adj,vis,res,1);
            }
            ans.push_back(res);
        }
        return ans;
    }
};