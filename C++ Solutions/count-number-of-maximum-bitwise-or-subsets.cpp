// https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets

class Solution {
  public:
    void subsetsUtil(vector < int > & A, vector < vector < int > > & res,
      vector < int > & subset, int index) {
      res.push_back(subset);
      for (int i = index; i < A.size(); i++) {
        subset.push_back(A[i]);
        subsetsUtil(A, res, subset, i + 1);
        subset.pop_back();
      }

      return;
    }

  vector < vector < int > > subsets(vector < int > & A) {
    vector < int > subset;
    vector < vector < int > > res;
    int index = 0;
    subsetsUtil(A, res, subset, index);
    return res;
  }

  int countMaxOrSubsets(vector < int > & nums) {
    int maximumOr = 0;
    for (auto i: nums) {
      maximumOr |= i;
    }
     int count1=0;
      vector<vector<int>> answer=subsets(nums);
      for(int i=0;i<answer.size();i++){
          int count2=0;
          for(int j=0;j<answer[i].size();j++){
              count2|=answer[i][j];
          }
          if(count2==maximumOr) count1++;
      }
      return count1;
  }
};