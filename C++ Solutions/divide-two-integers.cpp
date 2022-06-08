// https://leetcode.com/problems/divide-two-integers

class Solution {
public:
    int divide(int dividend, int divisor) {
       if(dividend==(1<<31) and divisor==-1){ return INT_MAX;} 
        long long int sign=((dividend>=0) == (divisor>=0))?true:false;
        long long int a=abs(dividend);                
        long long int b=abs(divisor);
        long long int result=0;
        while(a-b>=0){
            int x=0;
            while(a-(b<<1<<x)>=0){
                x++;
            }
            result+=(1<<x);
            a-=(b<<x);
        }
        return result*((sign)?1:-1);
    }
};