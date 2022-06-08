// https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60

class Solution {
public:
    int factorial(long long int n){
        return n*(n-1)/2;
    }
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> answer;
        int count=0;
        unordered_map<int,int> mpp;
        int fixedcount=0;
        for(int i=0;i<time.size();i++){
            if(time[i]%60==0){
                fixedcount++;
            }
        }
        for(int i=0;i<time.size();i++){
            time[i]=time[i]%60;
            if(mpp.find(60-time[i])!=mpp.end()){
                count+=mpp[60-time[i]];
            }
            mpp[time[i]]++;
         
        }
        count+=factorial(fixedcount);
        return count;
    }
};