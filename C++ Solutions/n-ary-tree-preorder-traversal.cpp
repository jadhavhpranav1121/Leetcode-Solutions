// https://leetcode.com/problems/n-ary-tree-preorder-traversal

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
    vector<int> preorder(Node* root) {
        vector<int> v;
        if(!root){
            return v;
        }
        stack<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* temp=q.top();
            q.pop();
            v.push_back(temp->val);
            cout<<temp->children.size();
            for(int i=temp->children.size()-1;i>=0;i--){
                if(temp->children[i]!=NULL){
                q.push(temp->children[i]);
                }
            }
        }
        return v;
    }
};