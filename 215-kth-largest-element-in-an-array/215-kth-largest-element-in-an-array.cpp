class Solution {
public:
    
    int solve(vector<int> &nums,int k, priority_queue<int,vector<int>,greater<int>> &heap){
        for(auto i:nums){
            heap.push(i);
            if(heap.size()>k)
                heap.pop();
        }
        return heap.top();
    }
    
    int solve(vector<int> &nums,int k, priority_queue<int> &heap){
        for(auto i:nums){
            heap.push(i);
            if(heap.size()>k)
                heap.pop();
        }
        return heap.top();
    }
    int findKthLargest(vector<int>& nums, int k) {
       int n = nums.size();
       if(k<=n-k){
          priority_queue<int,vector<int>,greater<int>> heap;
           return solve(nums,k,heap);
       }
       priority_queue<int> heap;
        return solve(nums,n-k+1,heap);
    }
};