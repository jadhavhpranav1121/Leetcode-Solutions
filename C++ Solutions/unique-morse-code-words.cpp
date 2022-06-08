// https://leetcode.com/problems/unique-morse-code-words

class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string all[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> s1;
        for(auto i:words){
            string s="";
            for(auto j:i){
                s+=all[j-'a'];
            }
            s1.insert(s);
        }
        return s1.size();
    }
};