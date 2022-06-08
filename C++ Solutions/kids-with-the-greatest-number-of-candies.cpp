// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maximum_number=*max_element(candies.begin(),candies.end());
        vector<bool> new1;
        for(auto i:candies){
            if(maximum_number<=i+extraCandies){
                new1.push_back(true);
            }
            else{
                new1.push_back(false);
            }
        }
        return new1;
    }
};