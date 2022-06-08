// https://leetcode.com/problems/jump-game-iii

class Solution {
public:
    void dfs(vector<int>& arr,vector<bool>& visited,int start,int size,bool& answer){
        
        if(start<0 and start>=size){
            return;
        }
        
        if(visited[start]==true){
            return;
        }
        if(arr[start]==0){
            answer=true;
            return;
        }
         cout<<start<<" ";
        visited[start]=true;
        if(start-arr[start]>=0 and start-arr[start]<arr.size()){
            dfs(arr,visited,start-arr[start],size,answer);
        }
        if(arr[start]+start>=0 and start+arr[start]<arr.size()){
            dfs(arr,visited,start+arr[start],size,answer);
        }
    }
    bool canReach(vector<int>& arr, int start) {
        if(arr.size()==0){
            return false;
        }
        if(start>arr.size()){
            return false;
        }
         bool answer;
        vector<bool> visited(arr.size(),false);
        if(start<=arr.size()){
            answer=false;
            dfs(arr,visited,start,arr.size(),answer);
        }
        return answer;
    }
};