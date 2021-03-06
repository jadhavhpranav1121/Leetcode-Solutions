class Solution {
public:
    int uniquePaths(int m, int n) {
        long long int path = 1;
        for ( long long  int i = n; i < (m + n - 1); i++) {
            path *= i;
            path /= (i - n + 1);
        }
        return (int)path;
    }
}; 
 
