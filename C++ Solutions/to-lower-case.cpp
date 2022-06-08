// https://leetcode.com/problems/to-lower-case

class Solution {
public:
    string& toLowerCase(string& s) {
          for (char& c : s)
              if((int)c>=65 and (int)c<=90 || (int)c>=97 and (int)c<=122){
                    c |= 0b00100000;
              }
  return s;

    }
};