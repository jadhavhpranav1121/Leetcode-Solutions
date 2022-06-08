// https://leetcode.com/problems/reduce-array-size-to-the-half

class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mp;
        for(auto i:arr){
            mp[i]++;
        }
        priority_queue<int> answer;
        for(auto i:mp){
            answer.push(i.second);
        }
        int count=0;
        int answer1=0;
        for(int i=0;i<arr.size();i++){
            if(answer1+answer.top()>=arr.size()/2){
                count++;
                break;
            }
            else{
                answer1+=answer.top();
                count++;
                 answer.pop();
            }
           
        }
        return count;
    }
};