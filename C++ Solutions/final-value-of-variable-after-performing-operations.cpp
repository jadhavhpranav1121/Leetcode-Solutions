// https://leetcode.com/problems/final-value-of-variable-after-performing-operations

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int solution1=0;
        for(auto str:operations){
            if(str[0]=='+' || str[str.size()-1]=='+'){
                solution1++;
            }
            else{
                solution1--;
            }
        }
        return solution1;
    }
};