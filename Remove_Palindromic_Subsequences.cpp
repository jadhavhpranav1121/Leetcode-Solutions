class Solution {
public:
    bool ispalindrome(string s){
        for(int i=0;i<(s.size()/2);i++){ // Divide into 2 parts and check from first and last. 
            if(s[i]!=s[s.size()-i-1]){ // check first and last character then first+1 and last-1 character if not equal return false;
                return false;
            }
        }
        return true;
    }
    int removePalindromeSub(string s) {
        if(s.size()==0) return 1;
        if(ispalindrome(s)) return 1; // If palindrome then only 1 time required to make empty string
        for(int i=0;i<s.size()-1;i++){
            if(s[i]!=s[i+1]){ // check for string having 2 different character or not i.e a and b 
                return 2; // why return 2 because all a together make palindrome and b together make palindrome so only 2 return 
            }
        }
        return 1; // if there are one character then its solution will be only 1
    }
};
