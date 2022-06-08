// https://leetcode.com/problems/minimum-domino-rotations-for-equal-row

class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int n = tops.size();
        vector<int> face1(7), face2(7), same(7);
        for(int i=0;i<n;i++){
        {
            face1[tops[i]]++;
            face2[bottoms[i]]++;
            
            if(tops[i]==bottoms[i])
                same[tops[i]]++;
        }
        
       
       
    }
         int minRotation = INT_MAX;
        for(int i=1;i<=6;++i)
        {
            if(face1[i]+face2[i]-same[i]==n)
                minRotation = min(minRotation,min(face1[i],face2[i])-same[i]);
        }
        
         return minRotation==INT_MAX?-1:minRotation;
}
};