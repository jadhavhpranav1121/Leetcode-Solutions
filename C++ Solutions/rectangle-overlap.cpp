// https://leetcode.com/problems/rectangle-overlap

class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2){
            return (rec1[0]<rec2[2] and rec1[1]<rec2[3] and rec2[0]<rec1[2] and rec2[1]<rec1[3]);  
    }
};