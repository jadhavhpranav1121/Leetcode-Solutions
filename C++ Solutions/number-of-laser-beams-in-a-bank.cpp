// https://leetcode.com/problems/number-of-laser-beams-in-a-bank

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> answer;
        int realanswer=0;
        for(int i=0;i<bank.size();i++){
            string temp=bank[i];
            int noOfOne=0;
            for(int j=0;j<temp.size();j++){
                if(temp[j]=='1'){
                     noOfOne++;
                }
            }
            if(noOfOne) answer.push_back(noOfOne);
        }
        if(answer.size()<=1){
            return 0;
        }
        else{

            for(int i=0;i<answer.size()-1;i++){
                realanswer+=(answer[i]*answer[i+1]);
            }
        }
        return realanswer;
    }
};