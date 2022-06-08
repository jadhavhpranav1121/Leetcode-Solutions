// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits

class Solution {
public:
     static bool cmp(pair<int,int> p1, pair<int,int> p2){
        if(p1.first!=p2.first)
            return p1.first<p2.first;
        else{
            return p1.second<p2.second;
        }
    }
    int numberOf(int a){
        int count=0;
        while(a!=0){
            int rem=a & -a;
            a=a-rem;
            count++;
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {        
        vector<pair<int,int>> vec;
        for(int i=0;i<arr.size();i++){
            int c=numberOf(arr[i]);
            vec.push_back(make_pair(c,arr[i]));
        }
        
        sort(vec.begin(),vec.end(),cmp);
        
        for(int i=0;i<arr.size();i++){
            arr[i]=vec[i].second;
        }
        return arr;
    }
    
};