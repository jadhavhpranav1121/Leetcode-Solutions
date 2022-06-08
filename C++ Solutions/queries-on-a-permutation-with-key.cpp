// https://leetcode.com/problems/queries-on-a-permutation-with-key

class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
         vector<int> v,res;
        for(int i=1;i<=m;i++)
            v.push_back(i);
        for(int i=0;i<queries.size();i++)
        {
                auto it=find(v.begin(),v.end(),queries[i]);
                int index=it-v.begin(),a;
                res.push_back(index);
                a=v[index];
                 v.erase(it);
                v.insert(v.begin(),a);
        }
        return res;
    }
};