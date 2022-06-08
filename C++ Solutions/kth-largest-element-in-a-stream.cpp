// https://leetcode.com/problems/kth-largest-element-in-a-stream

class KthLargest {
public:
    priority_queue<int> new1;
    int size=0;
    KthLargest(int k, vector<int>& nums) {
        size=k;
        if(nums.size()!=0){
            if(k>=nums.size()){
                for(int i=0;i<nums.size();i++){
                    new1.push(-1*nums[i]);
                }
            }
            else{
              for(int i=0;i<k;i++){
                new1.push(-1*nums[i]);
            }
        for(int i=k;i<nums.size();i++){
            if(new1.top()>(-1*nums[i])){
                new1.pop();
                new1.push(-1*nums[i]);
            }
        }
            }
        }
    }
    
    int add(int val) {
        if(new1.size()<size){
            new1.push(-val);
        }
        else if(new1.top()>(-1*val)){
            new1.pop();
            new1.push(-1*val);
        }
        return -new1.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */