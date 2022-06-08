// https://leetcode.com/problems/apply-discount-to-prices

class Solution {
public:
    bool isNumber(const string& str)
{
    for (char const &c : str) {
        if (isdigit(c) == 0 or c=='.') return false;
    }
    return true;
}

    string discountPrices(string sentence, int discount) {
        stringstream str,str1;
        string ans="";
        str<<sentence;
        while(str>>ans){
            if(ans[0]=='$' and ans.size()>1){
                string subans=ans.substr(1,ans.size());
                if(isNumber(subans)){
                      double answer=stod(subans);
                     double main_answer=(answer-(double)((discount)*(answer)/100));
                     str1<<"$"<<fixed<<setprecision(2)<<main_answer<<" ";
                }
                else{
                    str1<<ans<<" ";
                }
            }
            else{
                str1<<ans<<" ";
            }
        }
        string main_ans=str1.str();
        main_ans.pop_back();
        return main_ans;
    }
};