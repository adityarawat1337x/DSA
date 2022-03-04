class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int preSum=0;
        for(int i=0;i<nums.size();i++){
            if(preSum==sum-preSum-nums[i])
                return i;
            preSum+=nums[i];
        }
        
        return -1;
    }
};