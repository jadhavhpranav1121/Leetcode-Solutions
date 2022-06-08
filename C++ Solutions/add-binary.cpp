// https://leetcode.com/problems/add-binary

class Solution {
public:
    long binaryC(string a,long i=0){
        if(a.size()==0){
            return 0;
        }
        if(a[a.size()-1]=='1'){
            a.pop_back();
            return (1<<i) | binaryC(a,i+1);
        }
        else{
             a.pop_back();
        }
        return binaryC(a,i+1);
    }
    string binaryT(long a,string b){
        if(a==0){
            return b;
        }
        string new1=to_string(a%2);
        b.insert(0,new1);
        return binaryT(a/2,b);
    }
    string addBinary(string a, string b) {
        // long a1=binaryC(a);
        // long b1=binaryC(b);
        // long c=a1+b1;
        // string c1="";
        // if(c==0){
        //     return "0";
        // }
        // return binaryT(c,c1);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int size1=max(a.size(),b.size());
        int a1=(a.size()>b.size());
        int asize=a.size();
        int bsize=b.size();
        if(a1){
            for(int i=0;i<(asize-bsize);i++){
                b+='0';
            }
        }
        else{
            for(int i=0;i<(bsize-asize);i++){
                a+='0';
            }
        }
        char carry='0';
        string answer;
        for(int i=0;i<size1;i++){
            if(a[i]=='1' && b[i]=='1' && carry=='1'){
                answer.insert(0,string(1,'1'));
                carry='1';
            }
            else if(a[i]=='1' && b[i]=='1' && carry=='0'){
                answer.insert(0,string(1,'0'));
                carry='1';
            }
            else if((a[i]=='1' || b[i]=='1') && carry=='1'){
                answer.insert(0,string(1,'0'));
                carry='1';
            }
            else if((a[i]=='0' && b[i]=='0') && carry=='0'){
                answer.insert(0,string(1,'0'));
            }
            else{
                answer.insert(0,string(1,'1'));
                carry='0';
            }
         }
        // for(int i=0)
        if(carry=='1'){
            answer.insert(0,string(1,'1'));
        }
        return answer;
        }
};