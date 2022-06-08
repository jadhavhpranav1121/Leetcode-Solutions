// https://leetcode.com/problems/maximum-69-number

class Solution {
public:
    int maximum69Number (int num) {
        string main1=to_string(num);
        for(int i=0;i<main1.size();i++){
            if(main1[i]=='6'){
                main1[i]='9';
                break;
            }
        }
        return stoi(main1);
    }
};