// https://leetcode.com/problems/goal-parser-interpretation

class Solution {
public:
     string interpret(string command) {
        for(int i =1 ; i< command.size(); i++){
            if(command[i] == ')'){
                if(command[i-1]=='('){
                    command[i]='o';
                    command.erase(i-1,1);
                    i--;
                }else if(command[i-1]=='l'){
                    command.erase(i,1);
                    command.erase(i-3,1);
                    i-=2;
                    
                }
            }
        }
        return command;
    }
};