// https://leetcode.com/problems/sorting-the-sentence

class Solution {
public:

    string sortSentence(string s) {
        stringstream new1(s);
        string sentence;
        string new3="";
        vector<pair<int,string>> new2;
        while(new1>>sentence){
            new2.push_back({(sentence[sentence.size()-1]-'0'),sentence.substr(0,sentence.size()-1)});
        }   
        sort(new2.begin(),new2.end());
        for(auto i:new2){
            new3+=i.second+' ';
        }
        new3.pop_back();
        return new3;
    }
    
};