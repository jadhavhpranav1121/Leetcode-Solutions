// https://leetcode.com/problems/flood-fill

class Solution {
public:
   int value=0;
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]==newColor || image[sr][sc]!=value){
            return;
        }
        if(image[sr][sc]==value){
            image[sr][sc]=newColor;
        }
        dfs(image,sr+1,sc,newColor);
        dfs(image,sr-1,sc,newColor);
        dfs(image,sr,sc+1,newColor);
        dfs(image,sr,sc-1,newColor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        value=image[sr][sc];
        dfs(image,sr,sc,newColor);
        return image;
    }
};