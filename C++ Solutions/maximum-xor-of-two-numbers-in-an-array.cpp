// https://leetcode.com/problems/maximum-xor-of-two-numbers-in-an-array

class Node{
    public:
    Node* left;
    Node* right;
    
    Node(){
        left=right=NULL;
    }
};
class Trie{
    public:
    Node* root;
    Trie(){
        root=new Node();
    }
    
    void insert(int n){
        Node* temp = root;
        for(int i=31;i>=0;i--){
            
            int bit= ((n>>i)&1);
            if(bit==0){            
                if(temp->left==NULL){
                    temp->left = new Node();
                }
                temp=temp->left;
            }else{               
                 if(temp->right==NULL){
                    temp->right = new Node();
                }
                temp=temp->right;
            }
        }
        
    }
    int maxXorHelper(int value){
        int ans=0;
        Node* temp = root;
        for(int i=31;i>=0;i--){
            int bit = ((value>>i)&1);
            if(bit==0){ 
                if(temp->right){
                    temp=temp->right;
                    ans +=  (1<<i);
                }else{
                    temp=temp->left;
                }
            }else{
                if(temp->left){
                    temp=temp->left;
                    ans+= (1<<i);
                }else{
                    temp=temp->right;
                }
            }
        }
        return ans;
    }    
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        Trie T;
        int ans=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++){
            T.insert(nums[i]); 
            int cxor= T.maxXorHelper(nums[i]);
            ans=max(ans,cxor);
        }
        return ans;
    }
};