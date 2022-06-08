// https://leetcode.com/problems/number-complement

class Solution {
public:
    int findComplement(int num) {
        return num^((long long int)pow(2,((long long int)log2(num)+1))-1);
    }
};