class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int ans=-1,prev=0,sum=accumulate(nums.begin(),nums.end(),0);
        for(int i=0;i<nums.size();i++){
            if(prev==sum-nums[i]-prev)
                return ans=i;
            prev+=nums[i];
        }
        return ans;
    }
};