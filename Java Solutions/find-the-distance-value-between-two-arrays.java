// https://leetcode.com/problems/find-the-distance-value-between-two-arrays

class Solution {
    public int findTheDistanceValue(int[] arr1, int[] arr2, int d) {
        int count=0;
        Arrays.sort(arr2);
        for(int i=0;i<arr1.length;i++){
            int l=0;
            int r=arr2.length-1;
            while(l<=r){
                int mid=(l+r)/2;
                if(arr2[mid]<=arr1[i]+d && arr2[mid]>=arr1[i]-d){
                    count++;
                    break;
                }
                if(arr2[mid]>arr1[i]+d){
                    r=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
        }
        return arr1.length-count;
    }
}