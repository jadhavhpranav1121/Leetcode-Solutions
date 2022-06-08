// https://leetcode.com/problems/baseball-game

class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(int i=0;i<ops.size();i++){
            if(ops[i]!="C" and ops[i]!="D" and ops[i]!="+"){
                s.push(stoi(ops[i]));
            }
            else if(ops[i]=="C"){
                s.pop();
            }
            else if(ops[i]=="D"){
                int b=s.top();
                s.pop();
                int c=b*2;
                s.push(b);
                s.push(c);
            }
            else if(ops[i]=="+"){
                 int b=s.top();
                s.pop();
                int a=s.top();
                s.pop();
                int c=a+b;
                s.push(a);
                s.push(b);
                s.push(c);
            }
           
        }
         int sum=0;
            while(!s.empty()){
                sum+=s.top();
                cout<<s.top()<<" ";
                s.pop();
            }
            return sum;
    }
};