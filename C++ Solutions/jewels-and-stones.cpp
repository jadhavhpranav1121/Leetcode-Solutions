// https://leetcode.com/problems/jewels-and-stones

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int answer=0;
        for(int i=0;i<jewels.size();i++){
            answer+=count(stones.begin(),stones.end(),jewels[i]);
        }
        return answer;
    }
};