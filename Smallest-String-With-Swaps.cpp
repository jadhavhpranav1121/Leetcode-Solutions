class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
                int n = s.size();
        vector<int> p(n); 
        iota(p.begin(), p.end(), 0);
        function<int(int)> f = [&](int u) { return p[u] == u ? u : p[u] = f(p[u]); }; 
        for (auto i : pairs) {
            int u = i[0], v = i[1];
            u = f(u), v = f(v);
            p[u] = v;
        }
        vector<string> a(n);
        for (int i = 0; i < n; ++i) a[f(i)] += s[i];
        for (auto &i : a) sort(i.rbegin(), i.rend());
        for (int i = 0; i < n; ++i) {
            s[i] = a[f(i)].back();
            a[f(i)].pop_back();
        }
        return s;

    }
};
