class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0,ans=INT_MAX;
        for(int i=0,j=0;i<nums.size();i++){
            sum+=nums[i];
            if(sum>=target){
                ans = min(ans,i-j+1);
                while(sum>=target){
                    sum-=nums[j];
                    ans = min(ans,i-j+1);
                    j++;
                }
            }
        }
        
        return ans==INT_MAX?0:ans;
    }
};