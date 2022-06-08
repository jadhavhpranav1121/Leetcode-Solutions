// https://leetcode.com/problems/truncate-sentence

class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream str(s);
        string sentence,str1="";
        int i=0;
        while(i<k and str>>sentence){
            str1+=(sentence+" ");
            i++;
        }
        str1.pop_back();
        return str1;
    }
};