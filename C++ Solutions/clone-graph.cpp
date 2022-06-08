// https://leetcode.com/problems/clone-graph

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    Node* temp;
    void dfs(vector<Node*>& visited,Node* node,Node* main){
        if(visited[node->val]==NULL){
             if(main==NULL){
                main=new Node(node->val);
                temp=main;
                visited[node->val]=main;
    
                cout<<temp->val;
                 for(auto i:node->neighbors){
                    dfs(visited,i,main);
                }
            }
            else{           
                Node* newone=new Node(node->val);
                main->neighbors.push_back(newone);
                visited[node->val]=newone;
                main=main->neighbors[main->neighbors.size()-1];
                for(auto i:node->neighbors){
                    dfs(visited,i,main);
                }
            }
        }
        else{
            if(main!=NULL){
                main->neighbors.push_back(visited[node->val]);
            }
        }
    }
public:
    Node* cloneGraph(Node* node) {
        if(node==NULL) 
            return node;
        Node* main=NULL;
        vector<Node*> visited(1001,NULL);
        dfs(visited,node,main);
        return temp;
    }
};