class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> pre;
        pre.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            pre.push_back(nums[i]+pre.back());
        }
        
        return pre;
    }
};