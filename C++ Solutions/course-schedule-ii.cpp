// https://leetcode.com/problems/course-schedule-ii

class Solution {
public:
  void DFS(vector<int> adj[],int i,stack<int>& mainData,vector<bool>& visited){
        
        visited[i]=true;
        for(auto j=adj[i].begin();j!=adj[i].end();j++){
            if(!visited[*j]){
                DFS(adj,*j,mainData,visited);
            }
        }
       mainData.push(i);
    }
    bool isCyclicUtil(vector<int> adj[],int v,int V, bool visited[], bool recStack[])
{
    if(visited[v] == false)
    {
        visited[v] = true;
        recStack[v] = true;
        for(auto i=adj[v].begin(); i!=adj[v].end(); ++i)
        {
           
            if ( !visited[*i] && isCyclicUtil(adj,*i,V, visited, recStack) )
                return true;
            else if (recStack[*i])
                return true;
        }
 
    }
    recStack[v] = false; 
    return false;
}
 
    bool isCyclic(int V,vector<int> adj[])
{
    
    bool recStack[V],visited[V];
    memset(recStack,false,sizeof(recStack));
    memset(visited,false,sizeof(visited));
    for(int i = 0; i < V; i++)
    {
        visited[i] = false;
        recStack[i] = false;
    }
    for(int i = 0; i < V; i++)
        if (isCyclicUtil(adj,i,V, visited, recStack))
            return true;
 
    return false;
}
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        stack<int> stack1;
         vector<int> answer;
        vector<int> adj[numCourses];
         if(numCourses>0 and prerequisites.size()==0){
                for(int i=numCourses-1;i>=0;i--){
                answer.push_back(i);
                    }
                return answer;
            }
        else if(prerequisites.size()==0){
            answer.push_back(0);
            return answer;
        }
        
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);    
        }
         if(isCyclic(numCourses,adj)==true){
            return answer;
        }
        vector<bool> visited(numCourses,false);
       for(int i=0;i<numCourses;i++){
           if(!visited[i]){ 
           DFS(adj,i,stack1,visited);
           }
       }
        int stacksize=stack1.size();
        
        if(numCourses>stacksize){
            for(int i=numCourses;i>=stacksize+1;i--){
              answer.push_back(i-1);   
            }
        }
        while(!stack1.empty()){
            answer.push_back(stack1.top());
            stack1.pop();
        }
        return answer;
    }
};