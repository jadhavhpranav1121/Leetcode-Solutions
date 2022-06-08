// https://leetcode.com/problems/valid-mountain-array

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        bool in=true,de=false;
        int c1=0,c2=0;
        for(int i=0;i<arr.size()-1;i++){
            int diff=arr[i+1]-arr[i];
            if(diff>0){
                if(in==false and de==true){
                    return false;
                }
                c1++;
            }
            else if(diff<0){
                in=false;
                de=true;
                c2++;
            }
            else{
                return false;
            }
        }
        if(c1==arr.size()-1 || c2==arr.size()-1){
            return false;
        }
        return (in==false and de==true);
    }
};