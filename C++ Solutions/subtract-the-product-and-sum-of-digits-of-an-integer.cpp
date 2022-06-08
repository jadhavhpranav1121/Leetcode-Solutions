// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer

class Solution {
public:
    int sum1=0;
    int product(int n){
        if(n==0){
            return 1;
        }
        sum1+=(n%10);
        return (n%10)*(product(n/10));
    }
    int subtractProductAndSum(int n) {
        return product(n)-sum1;
    }
};