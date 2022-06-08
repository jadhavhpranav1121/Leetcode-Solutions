// https://leetcode.com/problems/detect-capital

class Solution {
public:
    bool detectCapitalUse(string word) {
        int countOfCapital=0,countOfLower=0;
        bool firstCapital=false;
        if(word.size()>=1){
            if(65<=(int)word[0] and (int)word[0]<=90){
                firstCapital=true;
            }
        }
        for(int i=0;i<word.size();i++){
            if(65<=(int)word[i] and (int)word[i]<=90){
                countOfCapital++;
            }
            else{
                countOfLower++;
            }
        }
        if(firstCapital==true and countOfCapital==1){
            return true;
        }
        else if(countOfCapital==word.size()){
            return true;
        }
        else if(countOfLower==word.size()){
            return true;
        }
        return false;
    }
};