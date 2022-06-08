// https://leetcode.com/problems/throne-inheritance

class ThroneInheritance {
public:
     struct Node{
    string name;
    bool is_live;
    vector<Node*> inher;
    Node(string n){name = n, is_live = true;}
  };
  Node* root;
  unordered_map <string, Node*> table;
  
  ThroneInheritance(string kingName) {
    table[kingName] = root = new Node(kingName);      
  }
    
  void birth(string parentName, string childName) {
    table[parentName]->inher.push_back(table[childName] = new Node (childName));
  }
    
  void death(string name) {
    table[name]->is_live = false;
  }
    
  vector<string> getInheritanceOrder() {
    vector<string> ans;
    dfs(ans, root);
    return ans;
  }
  
  void dfs(vector<string> &ans, Node *node){
    if(node->is_live) ans.push_back(node->name);
    
    for(auto &n: node->inher) dfs(ans, n);
  }};

/**
 * Your ThroneInheritance object will be instantiated and called as such:
 * ThroneInheritance* obj = new ThroneInheritance(kingName);
 * obj->birth(parentName,childName);
 * obj->death(name);
 * vector<string> param_3 = obj->getInheritanceOrder();
 */