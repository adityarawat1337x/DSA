class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        //length of max subarray whose sum is 0 of its length
        for(auto &i:nums)
            i = (i==0)?-1:1;
        
        unordered_map<int,int> mp;
        int ans=0,presum=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if(presum==0)
                ans=max(i+1,ans);
            if(mp.find(presum)==mp.end())
                mp[presum]=i;
            else {
                ans=max(i-mp[presum],ans);
            }
        }
        
        return ans;
    }
};