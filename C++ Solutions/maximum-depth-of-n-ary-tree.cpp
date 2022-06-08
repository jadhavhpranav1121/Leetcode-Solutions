// https://leetcode.com/problems/maximum-depth-of-n-ary-tree

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
    int max_depth=0;
    
    void maxHeight(Node* root,int height){
        if(!root){
            return;
        }
        max_depth=max(max_depth,height);
        for(int i=0;i<root->children.size();i++){
                 maxHeight(root->children[i],height+1);   
        }
        return;
    }
    int maxDepth(Node* root) {
        if(!root) return 0;
         maxHeight(root,1);   
        return max_depth;
    }
};