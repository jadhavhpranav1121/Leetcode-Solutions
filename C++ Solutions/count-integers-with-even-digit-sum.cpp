// https://leetcode.com/problems/count-integers-with-even-digit-sum

class Solution {
public:
    int sumOfDigits(int num){
        if(num==0){
            return 0;
        }
        return (num%10)+sumOfDigits(num/10);
    }
    int countEven(int num) {
        int cont=0;
        for(int i=1;i<=num;i++){
            if(sumOfDigits(i)%2==0){
                cont++;
            }
        }
        return cont;
    }
};