// https://leetcode.com/problems/xor-operation-in-an-array

class Solution {
public:
    int xorOperation(int n, int start) {
        int answer=0;
        int i=0;
        int new1=start;
        while(i!=n){
            start=new1+(2*i);
             answer^=start;
            i++; 
        }
        return answer;
    }
};