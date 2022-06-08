// https://leetcode.com/problems/sequential-digits

class Solution {
public:
    int lengthOfNumber(int n){
        if(n==0){
            return 0;
        }
        return lengthOfNumber(n/10)+1;
    }
    vector<int> sequentialDigits(int low, int high) {
        vector<int> newone{12,23,34,45,56,67,78,89,123,234,345,456,567,678,789,1234,2345,3456,4567,5678,6789,12345,23456,34567,45678,56789,123456,234567,345678,456789,1234567,2345678,3456789,12345678,23456789,123456789};
        vector<int> answer;
        for(int i=0;i<newone.size();i++){
            if(newone[i]>=low and newone[i]<=high){
                answer.push_back(newone[i]);
            }
        }
        return answer;
    }
};