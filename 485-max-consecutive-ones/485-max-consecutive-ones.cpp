class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,streak=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                streak++;
            if(nums[i]==0){
                ans = max(streak,ans);
                streak=0;
            }
        } 
        ans = max(streak,ans);
        return ans;
    }
};