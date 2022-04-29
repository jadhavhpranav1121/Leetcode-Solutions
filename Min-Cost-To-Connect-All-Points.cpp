class UnionFind{
        int num;
        int numComponents;
        vector<int> rank;
        vector<int> parent;
        public:
        UnionFind(int n){
            num = n; numComponents = n;
            rank = vector<int>(n, 0);
            parent = vector<int>(n);
            for(int i = 0; i<n; i++) parent[i] = i;
        }
        
        int size(){return num;}
        
        int components(){return numComponents;}
        
        int find(int p){
            while(p != parent[p]){
                parent[p] = parent[parent[p]];
                p = parent[p];
            }
            return p;
        }
        
        void unionn(int p, int q){
            int rootp = find(p); int rootq = find(q);
            if(rootp == rootq) return;
            if(rank[rootp] < rank[rootq]) parent[rootp] = rootq;
            else{
                parent[rootq] = rootp;
                if(rank[rootp] == rank[rootq]){rank[rootp]++;}
            }
            numComponents--;
        }
        
        int connected(int p, int q){
            return find(p) == find(q);
        }
        
    };
struct Edge{
    int u, v, wt;
    bool operator<(Edge const& other) {
        return wt < other.wt;
    }
};
class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
            int n = points.size();
        vector<Edge> edges;
        UnionFind dsu = UnionFind(n);
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                Edge e;
                e.u = i, e.v = j, e.wt = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                edges.push_back(e);
            }
        }
        int cost = 0;
        sort(edges.begin(), edges.end());
        for (Edge e : edges) {
            if (dsu.find(e.u) != dsu.find(e.v)) {
                cost += e.wt;
                dsu.unionn(e.u, e.v);
            }
        }
        return cost;
    }
};
