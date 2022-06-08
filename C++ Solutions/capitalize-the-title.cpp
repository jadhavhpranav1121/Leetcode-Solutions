// https://leetcode.com/problems/capitalize-the-title

class Solution {
public:
    string capitalizeTitle(string title) {
        stringstream string1(title);
        string word;
        string answer="";
        while(string1>>word){
            if(word.size()>2){
                for(auto &i:word){
                    if(isupper(i)){
                        i=i+32;
                    }
                }
                if(islower(word[0])){
                    word[0]-=32;
                }
            }
            else{
                 for(auto &i:word){
                    if(isupper(i)){
                        i=i+32;
                    }
                }
            }
            answer+=(word+" ");
        } 
        answer.pop_back();
        return answer;
    }
};