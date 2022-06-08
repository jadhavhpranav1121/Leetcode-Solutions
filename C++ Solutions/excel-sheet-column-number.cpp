// https://leetcode.com/problems/excel-sheet-column-number

class Solution {
public:
    int titleToNumber(string columnTitle) {
        int answer=0;
        int j=0;
        for(int i=columnTitle.size()-1;i>=0;i--){
            answer+=(columnTitle[i]-'A'+1)*pow(26,j);
            j++;
        }
        return answer;
    }
};