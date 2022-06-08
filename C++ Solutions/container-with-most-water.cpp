// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer=0;
        int i=0;
        int j=height.size()-1;
        while(i<=j){
            int max_area=(j-i)*(min(height[i],height[j]));
            if(max_area>answer){
                answer=max_area;
            }
            if(height[j]<height[i]){
                j--;
            }
            else if(height[i]<height[j]){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return answer;
    }
};