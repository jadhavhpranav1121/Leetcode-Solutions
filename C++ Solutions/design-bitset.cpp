// https://leetcode.com/problems/design-bitset

class Bitset {
public:
    vector<int> bit;
    int cnt;
    bool flip1;
    Bitset(int size) {
        bit.resize(size);
        cnt=0;
        flip1=false;
    }
    
    void fix(int idx) {
        if(flip1+bit[idx]==0){
           bit[idx]=1; 
           cnt++;
        }
        else if(flip1+bit[idx]==2){
            bit[idx]=0;
            cnt++;
        }
    }
    
    void unfix(int idx) {
        if(!flip1 and bit[idx]==1){
           bit[idx]=0; 
           cnt--;
        }
        else if(flip1 and bit[idx]==0){
            bit[idx]=1;
            cnt--;
        }
    }
    
    void flip() {
        flip1=!flip1;
        cnt=bit.size()-cnt;
    }
    
    bool all() {
        return cnt==bit.size();
    }
    
    bool one() {
        return cnt>=1;
    }
    
    int count() {
        return cnt;
    }
    
    string toString() {
        string w="";
        if(flip1){
            for(auto i:bit){
                w+=((i==0)?1:0)+'0';
            }
        }
        else{
            for(auto i:bit){
                w+=i+'0';
            }
        }
        return w;
    }
};

