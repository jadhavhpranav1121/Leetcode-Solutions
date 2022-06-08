// https://leetcode.com/problems/defanging-an-ip-address

class Solution {
public:
    string defangIPaddr(string address) {
        string new1="";
        for(int i=0;i<address.size();i++){
            if(address[i]=='.'){
                new1.push_back('[');
                new1.push_back('.');
                new1.push_back(']');
            }
            else{
            new1.push_back(address[i]);
            }
        }
        return new1;
    }
};