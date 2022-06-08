// https://leetcode.com/problems/check-if-word-equals-summation-of-two-words

class Solution {
public:
    int extractNumber(string f) {
	if (f.size() == 0) {
		return 0;
	}
	return ((char)f[0] - 97) * pow(10, f.size() - 1) + extractNumber(f.substr(1));
}
bool isSumEqual(string firstWord, string secondWord, string targetWord) {
	int targetdata = extractNumber(firstWord) + extractNumber(secondWord);
	if (extractNumber(targetWord) == targetdata) {
		return 1;
	}
	else {
		return 0;
	}
}
};