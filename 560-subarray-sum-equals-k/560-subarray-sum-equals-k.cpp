class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int presum=0,ans=0;
        mp[0]=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            if(presum==k)
                ans++;
            int rem = presum-k;
            if(mp.find(rem)!=mp.end())
                ans+=mp[rem];
            mp[presum]++;
        }
        
        return ans;
    }
};