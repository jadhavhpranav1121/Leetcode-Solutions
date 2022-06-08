// https://leetcode.com/problems/duplicate-zeros

class Solution {
public:
    void rearrange(vector<int>& arr,int i){
        for(int j=arr.size()-1;j>i;j--){
            arr[j]=arr[j-1];
        }
    }
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==0){
                rearrange(arr,i);
                arr[i+1]=0;
                i++;
            }
        }
    }
};