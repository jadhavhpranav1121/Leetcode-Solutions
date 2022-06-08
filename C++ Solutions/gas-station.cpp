// https://leetcode.com/problems/gas-station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int c = 0;
        int t = 0;
        int different = 0;
        int start = 0;

        for(int i = 0; i < gas.size(); i++){
            different = gas[i] - cost[i];

            t += different;
            c += different;
            if(c < 0){
                start = i + 1;
                c = 0;
            }
        }

        if(t >= 0){
            return start;
        }

        return -1;
    }
};