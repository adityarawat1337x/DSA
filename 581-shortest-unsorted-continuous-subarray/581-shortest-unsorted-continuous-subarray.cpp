class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        stack<int> st;
        int l=INT_MAX,r=INT_MIN;

        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1] and l>nums[i])
                l = nums[i];
        }

        for(int i=nums.size()-2;i>-1;i--){
            if(nums[i]>nums[i+1] and r<nums[i])
                r = nums[i];
        }

       
        int i=0;
        for(;i<nums.size();++i)
            if(nums[i]>l)
                break;
        
        int j=nums.size()-1;
        for(;j>=0;--j)
            if(nums[j]<r)
                break;
        
        return i>j?0:j-i+1;
    }
};