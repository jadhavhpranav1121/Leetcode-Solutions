// https://leetcode.com/problems/reverse-prefix-of-word

class Solution {
public:
    void reverse(string &word,size_t size,int i=0){
        if(i==(size/2)+1){
            return;
        }
        swap(word[i],word[size-i]);
        reverse(word,size,i+1);
    }
    string reversePrefix(string word, char ch) {
        size_t finded=word.find(ch);
        if(finded!=string::npos){
            reverse(word,finded);
        }
        return word;
    }
};