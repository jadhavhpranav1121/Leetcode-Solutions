// https://leetcode.com/problems/count-the-hidden-sequences

class Solution {
public:
    int numberOfArrays(vector<int>& d, int lower, int upper) {
        long max1 = 0 , min1 = 0 , sum = 0;
       for(int i = 0 ; i < d.size() ; i++){
           sum += d[i];
           min1 = min(min1 , sum); 
           max1 = max(max1 , sum); 
       }    
       long res1 = upper-max1 , res2 = lower-min1;  
        
       return (res1-res2+1)>0?(int)(res1-res2+1):0;
    }
};