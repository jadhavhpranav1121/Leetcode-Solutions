// https://leetcode.com/problems/n-ary-tree-postorder-traversal

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
                vector<int> v;
        if(!root){
            return v;
        }
        stack<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.top();
            q.pop();
            v.insert(v.begin(),temp->val);
            for(int i=0;i<temp->children.size();i++){
                if(temp->children[i]!=NULL){
                    q.push(temp->children[i]);
                }
            }
        }
        return v;
    }
};