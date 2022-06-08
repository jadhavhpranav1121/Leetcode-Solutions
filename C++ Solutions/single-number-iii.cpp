// https://leetcode.com/problems/single-number-iii

class Solution {
public:
    int most_significant_bit(long long n) {
        int mask = 1;
        while(1) {
            if((mask & n) == 0) {
                mask = mask << 1;
            }
            else break;
        }
        return mask;
    }
    vector<int> singleNumber(vector<int>& nums) {
        int main1=0;
        for(int v:nums){
            main1^=v;
        }
        int rightmost=most_significant_bit(main1);
        int x=0,y=0;
        for(int v:nums){
            if((v & rightmost)==0){
                x=x^v;
            }
            else{
                y=y^v;
            }
        }
        vector<int> answer;
        answer.push_back(x);
        answer.push_back(y);
        return answer;
    }
};