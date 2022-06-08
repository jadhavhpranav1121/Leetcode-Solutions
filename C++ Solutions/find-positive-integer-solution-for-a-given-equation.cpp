// https://leetcode.com/problems/find-positive-integer-solution-for-a-given-equation


class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
    vector<vector<int>> v;
    
  for(int i=1;i<=1000;i++){
        int value=binarySearch(customfunction,i,z);
       if(value!=-1){
           v.push_back({i,value});
       }
       else{
           continue;
       }
  }
   return v; 
    
}
int binarySearch(CustomFunction& customfunction,int x,int z){
    int l=1;
    int r =1000;
    while(l<=r){
        int mid = l + ((r-l)/2);
        if(customfunction.f(x,mid)==z){
            return mid;
        }
        else if(customfunction.f(x,mid)>z){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
}
};