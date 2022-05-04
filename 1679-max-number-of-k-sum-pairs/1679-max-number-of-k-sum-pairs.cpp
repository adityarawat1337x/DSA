class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto i:nums){
            if(mp.find(k-i)!=mp.end() and mp[k-i]>0){
                ans++;
                mp[k-i]--;
            }else 
                mp[i]++;
        }
        
        return ans;
    }
};