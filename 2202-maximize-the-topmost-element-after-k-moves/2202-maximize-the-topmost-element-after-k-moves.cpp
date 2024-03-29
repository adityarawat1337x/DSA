class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1){
            if(k>=n)
                return k&1?-1:nums[0];
            else return nums[0];
        }
        if(k==0 or k==1)
            return nums[k];
        
        int ans = *max_element(nums.begin(),nums.end());
        
        if(k>n)
            return ans;
        
        return max(*max_element(nums.begin(),nums.begin()+k-1),nums[k]);
        } 
};