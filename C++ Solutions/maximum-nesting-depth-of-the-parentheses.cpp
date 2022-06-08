// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses

class Solution {
public:
    int maxDepth(string s) {
        int answer=INT_MIN;
        int count=0;
        for(auto i:s){
            if(i=='('){
                count++;
            }
            else if(i==')'){
                count--;
            }
            if(count>answer){
                answer=count;
            }
        }
        return answer;
    }
};