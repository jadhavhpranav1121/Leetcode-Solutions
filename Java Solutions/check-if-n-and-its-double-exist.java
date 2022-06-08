// https://leetcode.com/problems/check-if-n-and-its-double-exist

class Solution {
    public boolean binarySearch(int[] arr,int l,int r,int value,int i){
        while(l<=r){
            int mid=l+(r-l)/2;
                if(arr[mid]==(value*2) && mid!=i){
                    return true;
                }
                else if(arr[mid]>value*2){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
        }
        return false;
    }
    public boolean checkIfExist(int[] arr) {
        Arrays.sort(arr);
        boolean ans=false;
        for(int i=0;i<arr.length-1;i++){
             ans|=binarySearch(arr,0,arr.length-1,arr[i],i);
            if(ans){
                return ans;
            }
        }
        return ans;
    }
}
