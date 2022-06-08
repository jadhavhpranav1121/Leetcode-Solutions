// https://leetcode.com/problems/cells-in-a-range-on-an-excel-sheet

class Solution {
public:
    vector<string> cellsInRange(string s) {
        string first;
        first.push_back(s[0]);
        first.push_back(s[1]);
        string second;
        second.push_back(s[3]);
        second.push_back(s[4]);
        vector<string> answer;
        if(first[0]==second[0] and first[1]==second[1]){
            answer.push_back(first);
            return answer;
        }
        else if(first[0]==second[0] and first[1]<second[1]){
            string ans="";
            for(int i=(first[1]-'0');i<=(second[1]-'0');i++){
                ans+=first[0];
                ans+=(i+'0');
                answer.push_back(ans);
                ans="";
            }
        }
        else if(first[0]<second[0] and first[1]==second[1]){
            string ans="";
            for(int i=(first[0]-'A');i<=(second[0]-'A');i++){
                ans=i+'A';
                ans+=first[1];
                answer.push_back(ans);
                ans="";
            }
        }
        else{
            string ans="";
            for(int i=(first[0]-'A');i<=(second[0]-'A');i++){
                    ans=(i+'A');
                  for(int j=(first[1]-'0');j<=(second[1]-'0');j++){
                    ans+=(j+'0');
                    answer.push_back(ans);
                    ans.pop_back();
            }
            }
        }
        return answer;
    }
};