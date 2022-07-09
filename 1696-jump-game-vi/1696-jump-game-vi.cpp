class Solution {
public:
    int maxResult(vector<int>& nums, int k) {
        vector<int> dp(nums.size(),INT_MIN);
        dp[0]=nums[0];
        set<int> pq;
        unordered_map<int,int> mp;
        pq.insert(nums[0]);
        mp[nums[0]]++;
        for(int i=1;i<nums.size();i++){
            if(i-k>0){
                mp[dp[i-k-1]]--;
                if(mp[dp[i-k-1]]<=0){
                    pq.erase(dp[i-k-1]);
                }
            }
            dp[i]=nums[i]+*pq.rbegin();
            pq.insert(dp[i]);
            mp[dp[i]]++;
        }
        return dp.back();
    }
};
