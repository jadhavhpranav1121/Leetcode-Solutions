// https://leetcode.com/problems/check-if-the-sentence-is-pangram

class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> new1;
        for(auto i:sentence){
            new1.insert(i);
        }
        return new1.size()==26;
    }
};