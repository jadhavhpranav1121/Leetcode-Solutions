// https://leetcode.com/problems/keys-and-rooms

class Solution {
public:
    void dfs(vector<vector<int>>& rooms, vector<bool> &visited,int j=0){
        if(visited[j]==false){
            cout<<j<<" ";
            visited[j]=true;
        for(int i=0;i<rooms[j].size();i++){
            if(visited[rooms[j][i]]==false){
             // 
                // cout<<rooms[j][i]<<" ";
                dfs(rooms,visited,rooms[j][i]);
               
            }
        }
            
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visited(rooms.size(),false);
        dfs(rooms,visited);
        
        for(int i=0;i<visited.size();i++){
            if(visited[i]==false){
                return false;
            }
        }
        return true;
    }
};