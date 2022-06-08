// https://leetcode.com/problems/count-the-number-of-consistent-strings

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int all[26];
        memset(all,0,sizeof(all));
        for(auto i:allowed){
            all[(i-'a')]=1;
        }
        int answer=words.size();
        for(auto word:words){
            for(auto i:word){
                if(!all[i-'a']){
                    answer--;
                    break;
                }
            }
        }
        return answer;
    }
};